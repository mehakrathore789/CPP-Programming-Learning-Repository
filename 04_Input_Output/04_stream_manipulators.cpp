/*
 * Program: Stream Manipulators
 * Description: <iomanip> manipulators let you control how output looks -
 *              decimal precision, field width, alignment, etc.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265358979;

    cout << "Default:            " << pi << endl;
    cout << "setprecision(2):    " << setprecision(2) << pi << endl;
    cout << fixed; // switches to fixed-point notation
    cout << "fixed + precision(3): " << setprecision(3) << pi << endl;

    cout << "\nRight-aligned width 10: [" << setw(10) << 42 << "]" << endl;
    cout << "Left-aligned width 10:  [" << left << setw(10) << 42 << "]" << endl;

    return 0;
}
