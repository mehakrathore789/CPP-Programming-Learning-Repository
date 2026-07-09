/*
 * Practice: Fraction Class with Operator Overloading
 * Description: Combines classes and operator overloading to model
 *              fractions that can be added together with natural syntax.
 */

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}

    Fraction operator+(const Fraction &other) const {
        int newNum = numerator * other.denominator + other.numerator * denominator;
        int newDen = denominator * other.denominator;
        return Fraction(newNum, newDen);
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction a(1, 2);
    Fraction b(1, 3);

    Fraction sum = a + b; // uses our overloaded operator+

    a.display(); cout << " + "; b.display(); cout << " = "; sum.display(); cout << endl;

    return 0;
}
