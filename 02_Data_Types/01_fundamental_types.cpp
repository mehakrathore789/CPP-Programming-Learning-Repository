/*
 * Program: Fundamental Data Types
 * Description: A tour of C++'s built-in primitive types.
 */

#include <iostream>
using namespace std;

int main() {
    int wholeNumber = 42;
    float singlePrecision = 3.14f;
    double doublePrecision = 3.14159265358979;
    char letter = 'C';
    bool isValid = true;   // C++ has a native bool type (C originally did not)

    cout << "int:    " << wholeNumber << endl;
    cout << "float:  " << singlePrecision << endl;
    cout << "double: " << doublePrecision << endl;
    cout << "char:   " << letter << endl;
    cout << "bool:   " << boolalpha << isValid << endl;

    return 0;
}
