/*
 * Program: std::list Basics
 * Description: list is a doubly linked list - efficient insertion and
 *              removal at any position, but no random access (no []).
 */

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 30};

    numbers.push_front(5);   // O(1) - efficient at the front, unlike vector
    numbers.push_back(40);    // O(1) at the back too

    cout << "List contents: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Insert 15 after the first element
    auto it = numbers.begin();
    advance(it, 1); // move the iterator forward by 1
    numbers.insert(it, 15);

    cout << "After insert: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    numbers.remove(30); // removes ALL elements equal to 30
    cout << "After remove(30): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}
