# 19. Exception Handling

Exceptions provide a structured way to detect and handle runtime errors,
separating error-handling logic from normal program flow.

## Concepts Covered
- `try`, `catch`, `throw`
- Catching standard exceptions (`std::exception` hierarchy)
- Creating custom exception classes
- Multiple catch blocks and catch-all (`...`)

## Files

| File | Description |
|------|--------------|
| `01_try_catch_basics.cpp` | Basic exception throwing and catching |
| `02_standard_exceptions.cpp` | Working with `<stdexcept>` types |
| `03_custom_exceptions.cpp` | Defining your own exception class |
| `04_multiple_catch_blocks.cpp` | Handling different exception types differently |

## Key Takeaways
- Always catch exceptions by `const reference&` to avoid unnecessary copying and object slicing.
- `catch (...)` catches ANY exception type but gives no information about it — use it as a last resort.
- Custom exceptions should typically inherit from `std::exception` and override `what()`.
