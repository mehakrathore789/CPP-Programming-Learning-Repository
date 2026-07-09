# 01. Basics of C++

Introduces the fundamental building blocks of a C++ program.

## Concepts Covered
- Structure of a C++ program (`#include`, `main()`, namespaces)
- `cout` / `cin` for output and input
- Comments
- Variables and initialization styles
- Constants (`const` and `constexpr`)
- Namespaces

## Files

| File | Description |
|------|--------------|
| `01_hello_world.cpp` | The classic first program |
| `02_program_structure.cpp` | Headers, `main()`, `std` namespace |
| `03_comments.cpp` | Single-line and multi-line comments |
| `04_variables.cpp` | Declaring and initializing variables (multiple styles) |
| `05_constants.cpp` | `const` vs `constexpr` |
| `06_namespaces.cpp` | Avoiding name collisions with namespaces |

## Key Takeaways
- Every C++ program needs exactly one `main()` function.
- `std::cout` and `std::cin` come from `<iostream>`; `using namespace std;` avoids repeating `std::`.
- C++11 introduced brace initialization `{}` as a safer alternative to `=`.
- `constexpr` values are evaluated at compile time, unlike `const`.
