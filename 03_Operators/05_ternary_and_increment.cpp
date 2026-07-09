/*
 * Program: Ternary Operator and Increment/Decrement
 * Description: condition ? valueIfTrue : valueIfFalse
 *              ++x increments before use, x++ increments after use.
 */

#include <iostream>
using namespace std;

int main() {
    int number = 7;
    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << number << " is " << result << endl;

    int a = 5;
    cout << "Pre-increment  ++a = " << ++a << " (a is now " << a << ")" << endl;

    int b = 5;
    cout << "Post-increment b++ = " << b++ << " (b is now " << b << ")" << endl;

    return 0;
}
