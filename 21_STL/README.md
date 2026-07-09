# 21. Standard Template Library (STL)

The STL is a collection of powerful, generic, ready-to-use data structures
(containers) and algorithms. Mastering it makes you dramatically more
productive in C++.

## Concepts Covered
- Sequence containers: `vector`, `list`
- Associative containers: `map`, `set`
- Container adapters: `stack`, `queue`
- Algorithms: `sort`, `find`, `count`, `accumulate`, etc.
- Iterators

## Files

| File | Description |
|------|--------------|
| `01_vector_deep_dive.cpp` | More vector operations (insert, erase, iterators) |
| `02_list_basics.cpp` | Doubly linked list container |
| `03_map_basics.cpp` | Key-value pairs with `std::map` |
| `04_set_basics.cpp` | Storing unique, automatically sorted elements |
| `05_stack_queue.cpp` | LIFO and FIFO container adapters |
| `06_algorithms_sort_find.cpp` | Common `<algorithm>` functions |

## Key Takeaways
- `vector`: dynamic array, fast random access, slow insert/delete in the middle.
- `list`: doubly linked list, fast insert/delete anywhere, no random access.
- `map`: sorted key-value pairs (red-black tree), O(log n) operations.
- `set`: sorted unique elements, O(log n) operations.
- `stack`/`queue`: restricted-access adapters built on top of other containers.
- `<algorithm>` functions work generically across containers via iterators.
