/*
 * Program: std::set Basics
 * Description: set stores only UNIQUE elements, automatically kept sorted.
 *              Inserting a duplicate has no effect.
 */

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {5, 3, 8, 3, 1, 8}; // duplicates (3, 8) are automatically dropped

    cout << "Set contents (unique, sorted): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    numbers.insert(10);
    numbers.insert(3); // no effect - 3 is already present

    cout << "After inserting 10 and duplicate 3: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    if (numbers.find(8) != numbers.end()) {
        cout << "8 is present in the set." << endl;
    }

    numbers.erase(5);
    cout << "After erasing 5: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}
