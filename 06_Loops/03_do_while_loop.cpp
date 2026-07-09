/*
 * Program: do-while Loop
 * Description: The loop body runs AT LEAST once, since the condition is
 *              checked after execution. Useful for menu-driven programs.
 */

#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Say Hello\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello there!" << endl;
        }
    } while (choice != 2);

    cout << "Goodbye!" << endl;

    return 0;
}
