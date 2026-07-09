/*
 * Practice: Bubble Sort
 * Description: Repeatedly swaps adjacent out-of-order elements.
 *              Time complexity: O(n^2)
 */

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // already sorted, exit early
    }
}

int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

    cout << "Before sorting: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    bubbleSort(numbers);

    cout << "After sorting:  ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}
