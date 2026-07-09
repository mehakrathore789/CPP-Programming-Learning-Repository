/*
 * Practice: Leap Year Check
 * Description: A year is a leap year if divisible by 4, but NOT by 100,
 *              UNLESS it's also divisible by 400.
 */

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int main() {
    int year = 2024;
    cout << year << " is " << (isLeapYear(year) ? "" : "NOT ") << "a leap year." << endl;

    return 0;
}
