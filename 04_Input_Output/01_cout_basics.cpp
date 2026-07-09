/*
 * Program: cout Basics
 * Description: cout sends formatted output to the console using the
 *              insertion operator <<, which can be chained.
 */

#include <iostream>
using namespace std;

int main() {
    int age = 21;
    double height = 5.9;

    cout << "Age: " << age << endl;             // endl flushes and adds a newline
    cout << "Height: " << height << " ft\n";     // "\n" is a lighter-weight newline
    cout << "Age is " << age << " and height is " << height << endl; // chaining

    return 0;
}
