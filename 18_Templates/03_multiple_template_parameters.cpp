/*
 * Program: Templates with Multiple Type Parameters
 * Description: A template can accept more than one type parameter,
 *              useful for structures like key-value pairs.
 */

#include <iostream>
#include <string>
using namespace std;

template <typename K, typename V>
class Pair {
private:
    K key;
    V value;

public:
    Pair(K k, V v) : key(k), value(v) {}

    void display() const {
        cout << key << " -> " << value << endl;
    }
};

int main() {
    Pair<string, int> agePair("Alice", 30);
    Pair<int, string> idPair(101, "Engineering");

    agePair.display();
    idPair.display();

    return 0;
}
