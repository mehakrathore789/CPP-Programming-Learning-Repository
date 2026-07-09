# 20. File Handling

C++ uses stream classes from `<fstream>` for file I/O: `ofstream` (output),
`ifstream` (input), and `fstream` (both).

## Files

| File | Description |
|------|--------------|
| `01_write_to_file.cpp` | Creating a file and writing text to it with `ofstream` |
| `02_read_from_file.cpp` | Reading text content back with `ifstream` |
| `03_append_to_file.cpp` | Adding new content without overwriting |
| `04_file_with_objects.cpp` | Writing/reading structured data line by line |

## Key Takeaways
- Always check `if (!file)` or `file.is_open()` before working with a stream.
- Files close automatically when the stream object goes out of scope (RAII), but explicit `.close()` is good practice.
- Use `ios::app` to open a file in append mode.
