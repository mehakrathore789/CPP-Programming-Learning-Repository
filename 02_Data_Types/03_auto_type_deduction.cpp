/*
 * Program: auto Type Deduction
 * Description: The 'auto' keyword tells the compiler to deduce a variable's
 *              type from its initializer, at COMPILE time (still statically typed).
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    auto age = 25;              // deduced as int
    auto price = 19.99;          // deduced as double
    auto initial = 'A';          // deduced as char
    auto name = string("Claude"); // deduced as std::string

    cout << "age (int):        " << age << endl;
    cout << "price (double):   " << price << endl;
    cout << "initial (char):   " << initial << endl;
    cout << "name (string):    " << name << endl;

    // auto is especially useful for verbose types like iterators:
    vector<int> numbers = {1, 2, 3};
    auto it = numbers.begin(); // equivalent to: vector<int>::iterator it = ...
    cout << "First element via auto iterator: " << *it << endl;

    return 0;
}
