/*
 * Program: Nested if-else
 * Description: An if-else placed inside another, for multi-factor decisions.
 */

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasTicket = true;

    if (age >= 18) {
        if (hasTicket) {
            cout << "Entry allowed." << endl;
        } else {
            cout << "Please buy a ticket first." << endl;
        }
    } else {
        cout << "Entry denied: must be 18 or older." << endl;
    }

    return 0;
}
