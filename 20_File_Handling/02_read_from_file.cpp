/*
 * Program: Reading from a File
 * Description: ifstream ("input file stream") reads a file's contents.
 *              Run 01_write_to_file.cpp first to create notes.txt.
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("notes.txt");

    if (!inFile) {
        cerr << "Error: could not open file. Did you run 01_write_to_file.cpp first?" << endl;
        return 1;
    }

    string line;
    cout << "Contents of notes.txt:" << endl;
    while (getline(inFile, line)) { // reads one line at a time until EOF
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
