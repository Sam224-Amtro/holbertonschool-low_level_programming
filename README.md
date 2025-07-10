Welcome to the programme holbertonschool-low_level_programming, projet hello_world

# C Programming Practice Repository

This repository contains various sub-projects and exercises focused on learning the fundamentals of the C programming language. Each directory corresponds to a specific topic or concept, and contains C source files (`.c`) and header files (`.h`) that explore these concepts through practical examples.

## Table of Contents

- [0x00 - Hello, World](#0x00---hello-world)
- [0x01 - Variables, if, else, while](#0x01---variables-if-else-while)
- [0x02 - Functions, nested loops](#0x02---functions-nested-loops)
- [0x03 - More functions, more nested loops](#0x03---more-functions-more-nested-loops)
- [0x04 - Pointers, arrays, and strings](#0x04---pointers-arrays-and-strings)
- [0x05 - More pointers, arrays, and strings](#0x05---more-pointers-arrays-and-strings)
- [0x06 - Recursion](#0x06---recursion)
- [0x07 - argc, argv](#0x07---argc-argv)
- [0x08 - malloc, free](#0x08---malloc-free)
- [0x09 - More malloc, free](#0x09---more-malloc-free)
- [0x0A - Structures, typedef](#0x0a---structures-typedef)

---

## 0x00 - Hello, World

Introduction to the C programming language, including:
- Compilation using `gcc`
- Basic I/O using `printf` and `puts`
- Comments in C

## 0x01 - Variables, if, else, while

Control flow structures and basic variable handling:
- `if`, `else`, `while` statements
- Arithmetic operations
- Logical comparisons

## 0x02 - Functions, nested loops

Exploring function definitions and nested loops:
- Creating and calling functions
- `for` and `while` loops inside other loops
- Printing patterns and performing iterations

## 0x03 - More functions, more nested loops

Advanced loop structures and functions:
- Handling numbers
- More complex conditionals
- Additional logic exercises

## 0x04 - Pointers, arrays, and strings

Introduction to pointers and arrays:
- Memory addresses and dereferencing
- Basic array manipulation
- String operations

## 0x05 - More pointers, arrays, and strings

Deeper into pointers and multi-dimensional arrays:
- Pointer arithmetic
- 2D arrays
- String functions

## 0x06 - Recursion

Using recursive functions to solve problems:
- Base and recursive cases
- Comparison with iterative solutions

## 0x07 - argc, argv

Command line arguments in C:
- Accessing arguments via `argc` and `argv`
- Input validation and processing

## 0x08 - malloc, free

Dynamic memory allocation:
- Using `malloc`, `calloc`, and `free`
- Managing memory manually in C

## 0x09 - More malloc, free

More practice with dynamic memory:
- Reallocation
- Nested dynamic structures (e.g. array of strings)

## 0x0A - Structures, typedef

Working with structures:
- Creating and accessing struct members
- Using `typedef` to simplify complex declarations

---

## How to Compile

Each folder contains `.c` and `.h` files. You can compile the files using:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <filename.c> -o <output>
