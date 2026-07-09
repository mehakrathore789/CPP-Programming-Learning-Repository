/*
 * Project: Simple Calculator (OOP version)
 * Description: Wraps calculator operations inside a class, demonstrating
 *              a simple, object-oriented approach to the classic exercise.
 */

#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }

    double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    cout << "===== Simple Calculator (OOP) =====\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        switch (choice) {
            case 1: cout << "Result: " << calc.add(num1, num2) << endl; break;
            case 2: cout << "Result: " << calc.subtract(num1, num2) << endl; break;
            case 3: cout << "Result: " << calc.multiply(num1, num2) << endl; break;
            case 4: cout << "Result: " << calc.divide(num1, num2) << endl; break;
            default: cout << "Invalid choice." << endl;
        }
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
