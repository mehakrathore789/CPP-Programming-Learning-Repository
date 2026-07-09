/*
 * Program: std::map Basics
 * Description: map stores key-value pairs, automatically sorted by key,
 *              with O(log n) lookup/insertion.
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> ages;

    ages["Alice"] = 30;   // insert or update
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    cout << "All entries (auto-sorted by key):" << endl;
    for (const auto &pair : ages) { // pair.first = key, pair.second = value
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Checking if a key exists
    if (ages.find("Bob") != ages.end()) {
        cout << "\nBob's age: " << ages["Bob"] << endl;
    }

    if (ages.count("Dave") == 0) {
        cout << "Dave is not in the map." << endl;
    }

    ages.erase("Alice"); // remove an entry
    cout << "\nAfter erasing Alice, size: " << ages.size() << endl;

    return 0;
}
