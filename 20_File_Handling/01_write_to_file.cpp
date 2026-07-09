/*
 * Program: Writing to a File
 * Description: ofstream ("output file stream") creates/overwrites a file
 *              and writes text to it, just like cout writes to the console.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("notes.txt"); // creates the file (or overwrites it)

    if (!outFile) {
        cerr << "Error: could not open file for writing." << endl;
        return 1;
    }

    outFile << "Learning C++ file handling.\n";
    outFile << "Streams make file I/O intuitive!\n";

    outFile.close(); // good practice, though the destructor would also close it
    cout << "Data written to notes.txt successfully." << endl;

    return 0;
}
