/*
 * Program: if-else
 * Description: Chooses between two blocks of code based on a condition.
 */

#include <iostream>
using namespace std;

int main() {
    int number = 7;

    if (number % 2 == 0) {
        cout << number << " is even" << endl;
    } else {
        cout << number << " is odd" << endl;
    }

    return 0;
}
