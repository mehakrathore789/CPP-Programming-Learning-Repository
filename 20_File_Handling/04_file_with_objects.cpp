/*
 * Program: Writing and Reading Structured Data
 * Description: Writes simple structured records (as delimited text lines)
 *              to a file, then parses them back using stringstream.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    double marks;
};

void saveStudents(const string &filename);
void loadStudents(const string &filename);

int main() {
    string filename = "students.txt";

    saveStudents(filename);
    loadStudents(filename);

    return 0;
}

void saveStudents(const string &filename) {
    ofstream outFile(filename);

    // Each line represents one student, fields separated by commas
    outFile << "Aditi Sharma,21,91.5\n";
    outFile << "Rohan Verma,22,87.0\n";
    outFile << "Neha Gupta,23,95.2\n";

    outFile.close();
    cout << "Student records saved to " << filename << endl;
}

void loadStudents(const string &filename) {
    ifstream inFile(filename);
    string line;

    cout << "\nLoaded student records:" << endl;
    while (getline(inFile, line)) {
        stringstream ss(line);
        string name, rollStr, marksStr;

        getline(ss, name, ',');
        getline(ss, rollStr, ',');
        getline(ss, marksStr, ',');

        Student s{name, stoi(rollStr), stod(marksStr)};
        cout << s.name << " | Roll: " << s.rollNumber << " | Marks: " << s.marks << endl;
    }

    inFile.close();
}
