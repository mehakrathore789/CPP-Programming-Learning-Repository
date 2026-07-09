# 22. Smart Pointers

Smart pointers (from `<memory>`) automatically manage the lifetime of
dynamically allocated objects, eliminating most manual `new`/`delete`
bugs like memory leaks and dangling pointers. This is the modern,
recommended way to handle dynamic memory in C++.

## Files

| File | Description |
|------|--------------|
| `01_unique_ptr.cpp` | Exclusive ownership of a dynamically allocated object |
| `02_shared_ptr.cpp` | Shared ownership with automatic reference counting |
| `03_weak_ptr.cpp` | A non-owning reference that avoids reference cycles |

## Key Takeaways
- `unique_ptr` cannot be copied, only moved — enforces single ownership.
- `shared_ptr` uses reference counting; the object is deleted when the last owner goes out of scope.
- `weak_ptr` observes a `shared_ptr`-managed object without affecting its reference count — useful for breaking circular references.
- Prefer `make_unique<T>()` / `make_shared<T>()` over raw `new` for exception safety.
