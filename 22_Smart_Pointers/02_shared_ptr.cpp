/*
 * Program: shared_ptr
 * Description: shared_ptr allows MULTIPLE owners of the same object,
 *              tracked via an internal reference count. The object is
 *              destroyed automatically once the LAST shared_ptr owning it
 *              is destroyed or reset.
 */

#include <iostream>
#include <memory>
using namespace std;

class Resource {
public:
    Resource() { cout << "Resource acquired." << endl; }
    ~Resource() { cout << "Resource released." << endl; }
};

int main() {
    shared_ptr<Resource> res1 = make_shared<Resource>();
    cout << "Reference count after creation: " << res1.use_count() << endl;

    {
        shared_ptr<Resource> res2 = res1; // shares ownership, ref count increases
        cout << "Reference count after copy: " << res1.use_count() << endl;
    } // res2 goes out of scope here, ref count decreases (object NOT destroyed yet)

    cout << "Reference count after inner scope ends: " << res1.use_count() << endl;

    return 0;
} // res1 goes out of scope here -> ref count reaches 0 -> Resource is destroyed
