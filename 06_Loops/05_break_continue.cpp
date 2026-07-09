/*
 * Program: break and continue
 * Description: 'break' exits a loop immediately; 'continue' skips to the
 *              next iteration.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Using break (stop at 5): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break;
        cout << i << " ";
    }
    cout << endl;

    cout << "Using continue (skip even numbers): ";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
