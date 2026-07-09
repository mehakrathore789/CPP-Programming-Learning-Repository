/*
 * Project: Library System (STL + File Handling)
 * Description: Manages a book catalog (title -> copies available) using a
 *              map, and persists it to library.txt so data survives
 *              between program runs.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

const string FILENAME = "library.txt";

class Library {
private:
    map<string, int> catalog; // title -> number of copies available

public:
    void load() {
        ifstream inFile(FILENAME);
        string line;

        while (getline(inFile, line)) {
            stringstream ss(line);
            string title, countStr;
            getline(ss, title, '|');
            getline(ss, countStr, '|');
            if (!title.empty()) {
                catalog[title] = stoi(countStr);
            }
        }
        inFile.close();
    }

    void save() {
        ofstream outFile(FILENAME);
        for (const auto &entry : catalog) {
            outFile << entry.first << "|" << entry.second << "\n";
        }
        outFile.close();
    }

    void addBook(const string &title, int copies) {
        catalog[title] += copies; // adds to existing count, or creates a new entry
        save();
        cout << "Added " << copies << " cop(y/ies) of \"" << title << "\"." << endl;
    }

    void issueBook(const string &title) {
        auto it = catalog.find(title);
        if (it == catalog.end() || it->second == 0) {
            cout << "\"" << title << "\" is not available." << endl;
            return;
        }
        it->second--;
        save();
        cout << "Issued \"" << title << "\". Copies remaining: " << it->second << endl;
    }

    void showCatalog() const {
        if (catalog.empty()) {
            cout << "The catalog is empty." << endl;
            return;
        }
        cout << "\nLibrary Catalog:" << endl;
        for (const auto &entry : catalog) {
            cout << " - " << entry.first << " (" << entry.second << " available)" << endl;
        }
    }
};

int main() {
    Library library;
    library.load(); // restore any previously saved catalog

    library.addBook("The Pragmatic Programmer", 3);
    library.addBook("Effective Modern C++", 2);

    library.issueBook("Effective Modern C++");

    library.showCatalog();

    return 0;
}
