/*
 * Program: Standard Exceptions
 * Description: <stdexcept> provides ready-made exception types for common
 *              error scenarios, all deriving from std::exception.
 */

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3};

    try {
        cout << "Element at index 10: " << numbers.at(10) << endl; // .at() throws, unlike []
    } catch (const out_of_range &e) {
        cout << "Caught out_of_range: " << e.what() << endl;
    }

    try {
        throw invalid_argument("Age cannot be negative.");
    } catch (const invalid_argument &e) {
        cout << "Caught invalid_argument: " << e.what() << endl;
    }

    return 0;
}
