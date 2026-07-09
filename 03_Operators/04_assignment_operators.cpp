/*
 * Program: Assignment Operators
 * Description: Shorthand operators combining an operation with assignment.
 */

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    x += 5; cout << "After += 5: " << x << endl;
    x -= 3; cout << "After -= 3: " << x << endl;
    x *= 2; cout << "After *= 2: " << x << endl;
    x /= 4; cout << "After /= 4: " << x << endl;
    x %= 3; cout << "After %= 3: " << x << endl;

    return 0;
}
