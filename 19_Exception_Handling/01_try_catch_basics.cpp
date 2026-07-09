/*
 * Program: try-catch Basics
 * Description: 'throw' raises an exception, 'try' marks a block of code
 *              that might throw, and 'catch' handles the exception if raised.
 */

#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed."); // raise an exception
    }
    return a / b;
}

int main() {
    try {
        cout << "10 / 2 = " << divide(10, 2) << endl;
        cout << "5 / 0 = " << divide(5, 0) << endl; // this will throw
        cout << "This line never runs." << endl;
    } catch (const runtime_error &e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    cout << "Program continues normally after the exception was handled." << endl;

    return 0;
}
