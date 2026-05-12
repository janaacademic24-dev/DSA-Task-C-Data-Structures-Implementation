
# DSA Task — C++ Data Structures Implementation

A C++ project implementing core data structures from scratch using both **array-based** and **linked list-based** approaches.

## 📁 Project Structure

| File | Description |
|------|-------------|
| `Node.h` | Generic node struct used by linked list, stack, and queue |
| `LinkedList.h / .cpp` | Singly linked list implementation |
| `stack.h / .cpp` | Stack implemented with array and linked list |
| `Queue.h / .cpp` | Queue implemented with array and linked list |
| `main.cpp` | Demo of all data structures |

## 🗂️ Data Structures

### Linked List
- Insert at head
- Insert at end
- Delete by value
- Display list

### Stack
Two implementations:
- **StackArray** — array-based stack with fixed capacity
- **StackLinkedList** — dynamic stack using linked list nodes

Both support: `push`, `pop`, `peek`, `isEmpty`, `isFull`

### Queue
Two implementations:
- **QueueArray** — circular array-based queue with fixed capacity
- **QueueLL** — dynamic queue using linked list nodes

Both support: `enqueue`, `dequeue`, `peek`, `isEmpty`, `isFull`

## 🛠️ Build & Run

This project uses **CMake**. To build and run:

```bash
mkdir cmake-build-debug
cd cmake-build-debug
cmake ..
cmake --build .
./DSA_task
```

Or open directly in **CLion** and run `main.cpp`.

## 📋 Requirements

- C++11 or later
- CMake 3.x+
- Any C++ compiler (GCC, MSVC, Clang)
