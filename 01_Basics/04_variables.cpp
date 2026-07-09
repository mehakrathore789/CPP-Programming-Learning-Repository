/*
 * Program: Variables
 * Description: C++ supports several ways of declaring and initializing
 *              variables. Modern C++ favors brace initialization {}.
 */

#include <iostream>
using namespace std;

int main() {
    int age = 21;             // Copy initialization
    int marks(95);             // Direct (functional-style) initialization
    int rollNumber{12};        // Brace/uniform initialization (C++11) - safer, prevents narrowing

    double price{49.99};
    char grade{'A'};
    bool isPassed{true};       // bool: true or false

    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << boolalpha << isPassed << endl; // boolalpha prints "true"/"false"

    // auto lets the compiler deduce the type from the initializer
    auto score = 88; // deduced as int
    cout << "Score (auto): " << score << endl;

    return 0;
}
