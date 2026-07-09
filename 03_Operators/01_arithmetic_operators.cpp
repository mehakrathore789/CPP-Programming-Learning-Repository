/*
 * Program: Arithmetic Operators
 * Description: +, -, *, /, % on numeric types.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 5;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl; // integer division truncates
    cout << "a % b = " << a % b << endl; // remainder

    return 0;
}
