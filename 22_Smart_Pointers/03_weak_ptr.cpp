/*
 * Program: weak_ptr
 * Description: weak_ptr holds a NON-OWNING reference to an object managed
 *              by shared_ptr. It doesn't affect the reference count, which
 *              helps avoid circular references (e.g., two objects that
 *              shared_ptr to each other, which would otherwise never be freed).
 */

#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> shared = make_shared<int>(42);
    weak_ptr<int> weak = shared; // does NOT increase the reference count

    cout << "shared_ptr use_count: " << shared.use_count() << endl; // still 1

    // To use the value, a weak_ptr must be "locked" into a temporary shared_ptr
    if (auto locked = weak.lock()) { // returns nullptr-like empty shared_ptr if expired
        cout << "Value via weak_ptr: " << *locked << endl;
    }

    shared.reset(); // release the only shared_ptr owning the int

    if (weak.expired()) {
        cout << "The object has been destroyed; weak_ptr is now expired." << endl;
    }

    return 0;
}
