/*
 * Program: else-if Ladder
 * Description: Assigns a letter grade based on marks.
 */

#include <iostream>
using namespace std;

int main() {
    int marks = 72;
    char grade;

    if (marks >= 90) grade = 'A';
    else if (marks >= 75) grade = 'B';
    else if (marks >= 60) grade = 'C';
    else if (marks >= 40) grade = 'D';
    else grade = 'F';

    cout << "Marks: " << marks << " -> Grade: " << grade << endl;

    return 0;
}
