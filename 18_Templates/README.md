# 18. Templates

Templates let you write generic, type-independent code. The compiler
generates a specific version of the function/class for each type you use.

## Files

| File | Description |
|------|--------------|
| `01_function_templates.cpp` | A generic `max()` function that works for any comparable type |
| `02_class_templates.cpp` | A generic `Box<T>` class that can hold any type |
| `03_multiple_template_parameters.cpp` | Templates with more than one type parameter |

## Key Takeaways
- Templates are resolved at COMPILE time — there's no runtime overhead compared to writing separate functions.
- `template <typename T>` and `template <class T>` are equivalent.
- STL containers like `vector<T>` and `map<K, V>` are themselves class templates.
