/*
 * Program: Relational and Logical Operators
 * Description: Relational operators compare values (result: bool).
 *              Logical operators combine boolean expressions.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << boolalpha; // prints true/false instead of 1/0
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    bool hasLicense = true, isAdult = true;
    cout << "\nCan drive (AND): " << (hasLicense && isAdult) << endl;

    bool isWeekend = false, isHoliday = true;
    cout << "Day off (OR):    " << (isWeekend || isHoliday) << endl;

    cout << "NOT hasLicense:  " << (!hasLicense) << endl;

    return 0;
}
