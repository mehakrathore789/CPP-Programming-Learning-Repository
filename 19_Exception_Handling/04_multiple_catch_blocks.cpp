/*
 * Program: Multiple catch Blocks
 * Description: You can chain multiple catch blocks to handle different
 *              exception types differently. They are checked in order,
 *              so put more SPECIFIC exception types before general ones.
 */

#include <iostream>
#include <stdexcept>
using namespace std;

void processValue(int value) {
    if (value < 0) {
        throw invalid_argument("Value cannot be negative.");
    }
    if (value > 100) {
        throw out_of_range("Value exceeds the allowed maximum of 100.");
    }
    cout << "Processing value: " << value << endl;
}

int main() {
    int testValues[] = {50, -5, 200};

    for (int val : testValues) {
        try {
            processValue(val);
        } catch (const invalid_argument &e) {        // most specific first
            cout << "Invalid argument: " << e.what() << endl;
        } catch (const out_of_range &e) {
            cout << "Out of range: " << e.what() << endl;
        } catch (const exception &e) {                 // general fallback
            cout << "Unexpected error: " << e.what() << endl;
        }
    }

    return 0;
}
