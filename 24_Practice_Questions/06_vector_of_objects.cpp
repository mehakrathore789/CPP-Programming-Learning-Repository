/*
 * Practice: Vector of Custom Objects
 * Description: Storing objects of a custom class in a vector, and using
 *              STL algorithms to query them.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Product {
public:
    string name;
    double price;

    Product(string n, double p) : name(n), price(p) {}
};

int main() {
    vector<Product> products = {
        Product("Laptop", 55000),
        Product("Mouse", 500),
        Product("Keyboard", 1200),
        Product("Monitor", 12000)
    };

    // Find the most expensive product
    auto mostExpensive = max_element(products.begin(), products.end(),
        [](const Product &a, const Product &b) { return a.price < b.price; });

    cout << "Most expensive product: " << mostExpensive->name
         << " ($" << mostExpensive->price << ")" << endl;

    // Count products cheaper than 2000
    int affordableCount = count_if(products.begin(), products.end(),
        [](const Product &p) { return p.price < 2000; });

    cout << "Products under $2000: " << affordableCount << endl;

    return 0;
}
