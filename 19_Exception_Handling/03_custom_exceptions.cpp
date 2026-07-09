/*
 * Program: Custom Exceptions
 * Description: You can define your own exception class by inheriting from
 *              std::exception and overriding what() to provide a
 *              meaningful error message.
 */

#include <iostream>
#include <exception>
#include <string>
using namespace std;

class InsufficientFundsException : public exception {
private:
    string message;

public:
    InsufficientFundsException(double shortfall) {
        message = "Insufficient funds: short by $" + to_string(shortfall);
    }

    const char *what() const noexcept override {
        return message.c_str();
    }
};

void withdraw(double balance, double amount) {
    if (amount > balance) {
        throw InsufficientFundsException(amount - balance);
    }
    cout << "Withdrawal successful." << endl;
}

int main() {
    try {
        withdraw(100, 250);
    } catch (const InsufficientFundsException &e) {
        cout << "Caught custom exception: " << e.what() << endl;
    }

    return 0;
}
