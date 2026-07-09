/*
 * Project: Student Management System (OOP + STL)
 * Description: Stores Student objects in a vector, and demonstrates
 *              adding, listing, and sorting records using STL algorithms.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double marks;

public:
    Student(string n, int r, double m) : name(n), rollNumber(r), marks(m) {}

    string getName() const { return name; }
    int getRollNumber() const { return rollNumber; }
    double getMarks() const { return marks; }

    void display() const {
        cout << name << " (Roll: " << rollNumber << ") - Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student("Aditi Sharma", 21, 91.5));
    students.push_back(Student("Rohan Verma", 22, 87.0));
    students.push_back(Student("Neha Gupta", 23, 95.2));
    students.push_back(Student("Karan Mehta", 24, 78.4));

    cout << "All students:" << endl;
    for (const auto &s : students) s.display();

    // Sort by marks, highest first, using a lambda comparator
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.getMarks() > b.getMarks();
    });

    cout << "\nRanked by marks (highest first):" << endl;
    int rank = 1;
    for (const auto &s : students) {
        cout << rank++ << ". ";
        s.display();
    }

    // Find the topper using max_element
    auto topper = max_element(students.begin(), students.end(),
        [](const Student &a, const Student &b) {
            return a.getMarks() < b.getMarks();
        });
    cout << "\nTop scorer: " << topper->getName() << " with " << topper->getMarks() << " marks." << endl;

    return 0;
}
