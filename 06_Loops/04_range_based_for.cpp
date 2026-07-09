/*
 * Program: Range-Based for Loop
 * Description: Introduced in C++11, this is the cleanest way to iterate
 *              over every element of a container without manual indexing.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Read-only iteration: ";
    for (int n : numbers) { // 'n' is a COPY of each element
        cout << n << " ";
    }
    cout << endl;

    cout << "Modifying in place: ";
    for (int &n : numbers) { // '&' makes 'n' a REFERENCE, so changes affect the original
        n *= 2;
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
