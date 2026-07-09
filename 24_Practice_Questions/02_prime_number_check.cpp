/*
 * Practice: Prime Number Check
 * Description: Checks divisibility only up to sqrt(n) for efficiency.
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number = 29;
    cout << number << " is " << (isPrime(number) ? "" : "NOT ") << "a prime number." << endl;

    return 0;
}
