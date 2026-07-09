/*
 * Program: Type Sizes and Limits
 * Description: sizeof() reports how many bytes a type occupies.
 *              <limits> provides the min/max representable values.
 */

#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Size of int:    " << sizeof(int) << " bytes\n";
    cout << "Size of float:  " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of char:   " << sizeof(char) << " byte\n";
    cout << "Size of bool:   " << sizeof(bool) << " byte\n\n";

    cout << "int range:    " << numeric_limits<int>::min()
         << " to " << numeric_limits<int>::max() << endl;
    cout << "float range:  " << numeric_limits<float>::lowest()
         << " to " << numeric_limits<float>::max() << endl;

    return 0;
}
