/*
 * Program: Vector Deep Dive
 * Description: More advanced vector operations beyond push_back:
 *              insert, erase, and iterator-based access.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Insert 25 at index 2 (before the element currently at index 2)
    numbers.insert(numbers.begin() + 2, 25);
    cout << "After insert: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Erase the element at index 0
    numbers.erase(numbers.begin());
    cout << "After erase:  ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Using iterators explicitly
    cout << "Using iterators: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Is empty? " << boolalpha << numbers.empty() << endl;
    numbers.clear(); // removes all elements
    cout << "After clear, size: " << numbers.size() << endl;

    return 0;
}
