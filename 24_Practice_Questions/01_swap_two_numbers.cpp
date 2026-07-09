/*
 * Practice: Swap Two Numbers
 * Description: Demonstrates swapping using references (the idiomatic C++
 *              way) versus the manual temp-variable approach.
 */

#include <iostream>
#include <utility> // for std::swap
using namespace std;

void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapWithTemp(x, y);
    cout << "After manual swap: x = " << x << ", y = " << y << endl;

    int p = 3, q = 8;
    swap(p, q); // std::swap - the idiomatic, built-in way in C++
    cout << "After std::swap: p = " << p << ", q = " << q << endl;

    return 0;
}
