/*
 * Program: Appending to a File
 * Description: Opening a file with ios::app adds new content to the END
 *              of the file WITHOUT erasing existing data.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("notes.txt", ios::app); // ios::app = append mode

    if (!outFile) {
        cerr << "Error: could not open file for appending." << endl;
        return 1;
    }

    outFile << "This line was appended later.\n";
    outFile.close();

    cout << "New line appended to notes.txt." << endl;
    return 0;
}
