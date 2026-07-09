/*
 * Program: Type Conversion
 * Description: Implicit conversion happens automatically; explicit
 *              conversion (casting) is done deliberately using static_cast<T>,
 *              which is the modern, safer alternative to C-style casts.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 3.5;

    // Implicit conversion: 'a' is promoted to double for the addition
    double result = a + b;
    cout << "int + double = " << result << endl;

    double price = 99.95;

    // Explicit conversion using static_cast - truncates the decimal part
    int roundedDown = static_cast<int>(price);
    cout << "static_cast<int>(99.95) = " << roundedDown << endl;

    int total = 7, count = 2;
    double average = static_cast<double>(total) / count; // force floating-point division
    cout << "7 / 2 as double = " << average << endl;

    return 0;
}
