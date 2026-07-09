/*
 * Program: Stack and Queue
 * Description: stack is LIFO (Last In, First Out) - like a stack of plates.
 *              queue is FIFO (First In, First Out) - like a line at a store.
 *              Both are "container adapters" built on top of other containers.
 */

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // --- Stack (LIFO) ---
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " "; // look at the top element
        s.pop();                  // remove the top element
    }
    cout << endl;

    // --- Queue (FIFO) ---
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Queue (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " "; // look at the front element
        q.pop();                    // remove the front element
    }
    cout << endl;

    return 0;
}
