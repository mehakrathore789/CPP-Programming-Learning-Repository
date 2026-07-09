/*
 * Program: cin Basics
 * Description: cin reads formatted input from the keyboard using the
 *              extraction operator >>. It stops at whitespace.
 */

#include <iostream>
using namespace std;

int main() {
    int age;
    double weight;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "You are " << age << " years old and weigh " << weight << " kg." << endl;

    return 0;
}
