# 04. Input / Output

C++ uses **streams** (`cin`, `cout`, `cerr`) instead of C's `printf`/`scanf`,
though C-style I/O is still fully supported via `<cstdio>`.

## Concepts Covered
- `cout` and the `<<` insertion operator
- `cin` and the `>>` extraction operator
- Reading full lines with `getline()`
- Stream manipulators (`setprecision`, `setw`, `fixed`)

## Files

| File | Description |
|------|--------------|
| `01_cout_basics.cpp` | Formatted output with `cout` |
| `02_cin_basics.cpp` | Reading input with `cin` |
| `03_getline_basics.cpp` | Reading a full line, including spaces |
| `04_stream_manipulators.cpp` | Controlling output formatting/precision |

## Key Takeaways
- `cin >>` stops reading at whitespace — use `getline()` for full lines/sentences.
- `<iomanip>` provides manipulators like `setprecision()`, `setw()`, `fixed`.
- Chaining is possible: `cout << a << b << c;` and `cin >> x >> y;`
