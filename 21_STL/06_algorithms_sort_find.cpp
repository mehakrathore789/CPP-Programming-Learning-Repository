/*
 * Program: <algorithm> Basics
 * Description: The STL <algorithm> header provides generic functions that
 *              work across different container types via iterators.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 9, 3};

    sort(numbers.begin(), numbers.end()); // ascending sort
    cout << "Sorted: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    auto it = find(numbers.begin(), numbers.end(), 8);
    if (it != numbers.end()) {
        cout << "Found 8 at position: " << (it - numbers.begin()) << endl;
    }

    int total = accumulate(numbers.begin(), numbers.end(), 0); // sum all elements
    cout << "Sum of all elements: " << total << endl;

    int countGreaterThan3 = count_if(numbers.begin(), numbers.end(),
                                       [](int n) { return n > 3; });
    cout << "Count of elements > 3: " << countGreaterThan3 << endl;

    reverse(numbers.begin(), numbers.end());
    cout << "Reversed: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}
