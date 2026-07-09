/*
 * Program: unique_ptr
 * Description: unique_ptr represents EXCLUSIVE ownership of a dynamically
 *              allocated object. It cannot be copied (only moved), and
 *              automatically deletes the object when it goes out of scope -
 *              no manual 'delete' required.
 */

#include <iostream>
#include <memory>
using namespace std;

class Resource {
public:
    Resource() { cout << "Resource acquired." << endl; }
    ~Resource() { cout << "Resource released." << endl; }
    void use() { cout << "Using the resource." << endl; }
};

int main() {
    unique_ptr<Resource> res = make_unique<Resource>(); // preferred over 'new'
    res->use();

    // unique_ptr<Resource> res2 = res; // would NOT compile - cannot copy

    unique_ptr<Resource> res2 = move(res); // ownership TRANSFERRED to res2
    if (!res) {
        cout << "res is now empty after the move." << endl;
    }
    res2->use();

    return 0;
} // res2 goes out of scope here -> destructor runs automatically, no leak
