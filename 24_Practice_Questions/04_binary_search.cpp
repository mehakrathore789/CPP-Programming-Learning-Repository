/*
 * Practice: Binary Search
 * Description: Efficiently searches a SORTED vector by halving the search
 *              range each step. Time complexity: O(log n)
 */

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> sortedNumbers = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int target = 23;

    int result = binarySearch(sortedNumbers, target);

    if (result != -1) {
        cout << target << " found at index " << result << endl;
    } else {
        cout << target << " not found in the array" << endl;
    }

    return 0;
}
