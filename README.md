# Linked Lists of Names

## Overview
This project implements a **dynamic linked list** to store and manage names efficiently. It focuses on **pointer manipulation, dynamic memory allocation, and linked list operations**, providing a practical understanding of **C programming and data structures**.

The implementation uses **separately compiled files**, where the function definitions are in `functions.cpp`, and they are linked with the provided driver (`names_list.o`) to create the final executable.

## Features
- Implements a **singly linked list** for managing names.
- Dynamically allocates memory using **malloc** and frees memory correctly to prevent leaks.
- Supports standard linked list operations:
  - **Insertion**
  - **Deletion**
  - **Search**
  - **Sorting**
  - **Traversal**
- Uses **separate compilation** with provided `functions.h` for modularity.
- Includes a **testing script (`my_tests.sh`)** to validate correctness.

## Files
| File | Description |
|------|------------|
| `functions.cpp` | Implementation of linked list functions |
| `functions.h` | Header file containing function prototypes |
| `names_list.o` | Pre-compiled driver program (provided) |
| `names_list.txt` | Sample input data file containing names |
| `my_tests.sh` | Shell script for automated testing |
| `build.sh` | Build script for compiling the program |

## Algorithm
1. **Read names from `names_list.txt`** and insert them into the linked list.
2. **Perform operations**:
   - Insert new names at specified positions.
   - Delete names based on user input.
   - Search for a name in the list.
   - Sort names alphabetically.
3. **Display the final list** of names.

## Usage

### **Building the Program**
Instead of manually compiling the program, you can use the **provided build script** (`build.sh`), which simplifies compilation:
```sh
bash build.sh
```
This script:

Includes necessary header files.
Links the utilities library.
Compiles functions.cpp with names_list.o to create the final executable.
Running the Program
After building, run:

```sh
./names_list
```

##Testing
Use the provided testing script:

```sh
bash my_tests.sh
```
It automatically runs test cases to verify correctness.

###Experimental Results
The project successfully implements a modular, efficient, and memory-safe linked list. Tests confirm that:

Insertions and deletions work as expected.
The search operation efficiently finds names.
Sorting correctly orders names alphabetically.
Memory allocation and deallocation are handled properly.

##System Requirements
GCC/G++ Compiler (for C++ compilation)
Linux/macOS/WSL recommended for execution
Valgrind (for memory leak checking, optional)
