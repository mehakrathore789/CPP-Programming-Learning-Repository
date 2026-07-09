# 02. Data Types

C++ includes all of C's fundamental types, plus `bool` and stronger type
inference tools like `auto`.

## Concepts Covered
- Fundamental types: `int`, `float`, `double`, `char`, `bool`
- `sizeof` and type ranges
- `auto` type deduction
- Implicit and explicit (`static_cast`) type conversion

## Files

| File | Description |
|------|--------------|
| `01_fundamental_types.cpp` | int, float, double, char, bool overview |
| `02_type_sizes_and_limits.cpp` | Using `sizeof` and `<limits>` |
| `03_auto_type_deduction.cpp` | Letting the compiler infer types with `auto` |
| `04_type_conversion.cpp` | Implicit conversion and `static_cast<>` |

## Key Takeaways
- `bool` stores `true` (1) or `false` (0) and is a distinct type from `int`.
- Prefer `static_cast<T>(value)` over C-style casts `(T)value` — it's safer and clearer.
- `auto` deduces type from the initializer, reducing verbosity without losing type safety.
