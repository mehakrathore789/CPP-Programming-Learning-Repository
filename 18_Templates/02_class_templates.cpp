/*
 * Program: Class Templates
 * Description: A generic 'Box' class that can hold a value of ANY type,
 *              decided when the object is created.
 */

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T content;

public:
    Box(T value) : content(value) {}

    T getContent() const {
        return content;
    }

    void setContent(T value) {
        content = value;
    }
};

int main() {
    Box<int> intBox(42);
    Box<string> stringBox("Hello Templates");

    cout << "intBox contains: " << intBox.getContent() << endl;
    cout << "stringBox contains: " << stringBox.getContent() << endl;

    return 0;
}
