/*
 * Program: Function Templates
 * Description: A single generic function that works for ANY type that
 *              supports the '>' comparison, avoiding the need to write
 *              separate max() functions for int, double, char, etc.
 */

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3, 7:       " << findMax(3, 7) << endl;         // T = int
    cout << "Max of 2.5, 1.5:   " << findMax(2.5, 1.5) << endl;       // T = double
    cout << "Max of 'a', 'z':   " << findMax('a', 'z') << endl;        // T = char

    return 0;
}
