/*
 * Program: Structure of a C++ Program
 * Description: Demonstrates the standard parts of a C++ program:
 *              1. Preprocessor directives (#include)
 *              2. Using declarations / namespaces
 *              3. Global declarations (optional)
 *              4. main() function - the entry point
 *              5. Statements and return
 */

#include <iostream>       // 1. Preprocessor directive
using namespace std;       // 2. Avoids writing std:: before cout, cin, etc.

int globalCounter = 0;     // 3. Global variable, accessible throughout this file

int main() {                // 4. Program entry point
    globalCounter = 1;                    // 5. Statement
    cout << "Counter: " << globalCounter << endl;

    return 0;                // Returns exit status to the OS
}
