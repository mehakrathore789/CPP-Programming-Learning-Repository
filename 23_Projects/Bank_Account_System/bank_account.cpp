/*
 * Project: Bank Account System
 * Description: Models a bank account with encapsulated balance, and uses
 *              a custom exception to reject invalid withdrawals.
 */

#include <iostream>
#include <string>
#include <exception>
using namespace std;

class InsufficientFundsException : public exception {
private:
    string message;

public:
    InsufficientFundsException(double balance, double requested) {
        message = "Cannot withdraw $" + to_string(requested) +
                   " - current balance is only $" + to_string(balance);
    }

    const char *what() const noexcept override {
        return message.c_str();
    }
};

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string owner, double initialBalance)
        : ownerName(owner), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit amount must be positive." << endl;
            return;
        }
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException(balance, amount);
        }
        balance -= amount;
        cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    }

    double getBalance() const { return balance; }
    string getOwnerName() const { return ownerName; }
};

int main() {
    BankAccount account("Meera Nair", 1000);

    cout << "Account owner: " << account.getOwnerName() << endl;

    account.deposit(500);

    try {
        account.withdraw(2000); // will throw
    } catch (const InsufficientFundsException &e) {
        cout << "Transaction failed: " << e.what() << endl;
    }

    account.withdraw(300); // valid withdrawal

    return 0;
}
