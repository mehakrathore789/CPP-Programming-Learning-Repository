# Library System (STL + File Handling)

Manages a book inventory using `map<string, int>` (title -> copies available)
and persists the inventory to a text file so it survives between runs.

## Concepts Used
- Classes
- `map<string, int>`
- File handling (`ofstream`/`ifstream`)
- `stringstream` parsing

## How to Run
```bash
g++ -std=c++17 library_system.cpp -o library_system
./library_system
```

Every time you add or issue a book, the on-disk `library.txt` catalog is
updated so your data persists across runs.
