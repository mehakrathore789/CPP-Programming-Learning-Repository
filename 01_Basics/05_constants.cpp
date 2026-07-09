/*
 * Program: Constants
 * Description: const - value fixed after initialization, may be runtime-determined.
 *              constexpr - value must be known at COMPILE time, enabling optimizations.
 */

#include <iostream>
using namespace std;

int main() {
    const int MAX_STUDENTS = 60;      // fixed for the lifetime of the variable
    constexpr double PI = 3.14159;     // guaranteed compile-time constant

    cout << "Max students: " << MAX_STUDENTS << endl;
    cout << "Value of PI: " << PI << endl;

    // Uncommenting the next line causes a compile-time error:
    // MAX_STUDENTS = 100; // error: assignment of read-only variable

    constexpr int squareOf5 = 5 * 5; // computed at compile time, not runtime
    cout << "5 squared (compile-time): " << squareOf5 << endl;

    return 0;
}
