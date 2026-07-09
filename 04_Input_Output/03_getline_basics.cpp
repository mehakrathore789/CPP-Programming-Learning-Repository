/*
 * Program: getline() Basics
 * Description: cin >> stops at the first whitespace, so it can't read a
 *              full sentence. getline() reads an entire line, including spaces.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName); // reads everything until the Enter key

    cout << "Hello, " << fullName << "! Welcome to C++." << endl;

    return 0;
}
