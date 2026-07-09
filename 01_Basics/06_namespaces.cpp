/*
 * Program: Namespaces
 * Description: Namespaces prevent naming conflicts by grouping related
 *              identifiers under a named scope.
 */

#include <iostream>
using namespace std;

namespace MathUtils {
    const double PI = 3.14159;
    int square(int x) { return x * x; }
}

namespace Physics {
    const double PI = 3.14; // a DIFFERENT PI, no conflict thanks to namespaces
}

int main() {
    cout << "MathUtils::PI = " << MathUtils::PI << endl;
    cout << "Physics::PI   = " << Physics::PI << endl;
    cout << "Square of 6   = " << MathUtils::square(6) << endl;

    return 0;
}
