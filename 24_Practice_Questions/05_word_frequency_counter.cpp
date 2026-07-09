/*
 * Practice: Word Frequency Counter
 * Description: Counts how many times each word appears in a sentence,
 *              using a map to associate each word with its count.
 */

#include <iostream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

int main() {
    string sentence = "the quick brown fox jumps over the lazy dog the fox runs";
    map<string, int> wordCount;

    stringstream ss(sentence);
    string word;

    while (ss >> word) { // splits on whitespace automatically
        wordCount[word]++; // creates the entry with value 0 if new, then increments
    }

    cout << "Word frequencies:" << endl;
    for (const auto &entry : wordCount) { // map is automatically sorted alphabetically
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
