/*
 * Program: Bitwise Operators
 * Description: Operate directly on the binary representation of integers.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 12; // 1100
    int b = 10; // 1010

    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "~a     = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}
