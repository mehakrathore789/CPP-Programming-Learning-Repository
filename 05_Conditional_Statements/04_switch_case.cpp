/*
 * Program: switch-case
 * Description: Compares a variable against multiple constant values.
 */

#include <iostream>
using namespace std;

int main() {
    int dayNumber = 3;

    switch (dayNumber) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6:
        case 7:
            cout << "Weekend" << endl; // 6 and 7 share this block
            break;
        default:
            cout << "Invalid day number" << endl;
    }

    return 0;
}
