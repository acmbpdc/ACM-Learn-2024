# Learn-C-Programming
A beginner-friendly guide to learning C programming, covering fundamental concepts with example codes and explanations.
In this two-hour session, we will quickly revise the essential C programming concepts, focusing on building a solid foundation in:

- Basic Input/Output
- Simple arithmetic and ASCII operations
- Matrices
- Functions
- String Operations
- Pointers
- Structures
- Recursion

This session is perfect for beginners. By the end, you’ll be ready to implement these key concepts in your projects and exams!

## Libraries to Include

Before we start coding, ensure you include the necessary libraries in your program:

```c
#include <stdio.h>   // For standard input/output functions
#include <stdlib.h>  // For standard library functions like malloc, atoi, etc.
#include <string.h>  // For string handling functions
#include <math.h>    // For math operations like sqrt(), pi, etc.
```

## 1. Basic Input/Output

Understanding the various methods for taking input and displaying output is fundamental. Here's a quick reference for the format specifiers:
// Format Specifier for Different Data Types
| Format Specifier | Data Type |
| ---------------- | --------- |
| %d or %i         | int       |
| %c               | char      |
| %f               | float     |
| %lf              | double    |
| %s               | string    |


In C, basic input/output operations are handled using the `stdio.h` library. We use functions like `printf()` to display output on the screen and `scanf()` to take input from the user. Understanding how to use these functions effectively is crucial for writing interactive C programs.

### Example 1: Basic Input and Output

In this example, we demonstrate how to take input and output simple data types such as integers, floats, and strings.

[**Basic.c**](Input-output/Basic.c)

### Example 2: Gets and Puts function

In this example, we take multiple types of input and print them out. The program takes a student's ID, name, marks, and grade, and then displays them.

[**Gets.c**](Input-output/Gets.c)

### Question 1

Now, it's your turn to try! Write a program that takes a student's ID (integer), name (string), and age (integer), then prints out the entered details.

[**Student.c**](Input-output/Student.c) 

## 2. Simple Arithmetic and ASCII

In this section, we will practice performing basic arithmetic operations and working with ASCII values in C.

### Key Concepts:
- Arithmetic operations: Addition, subtraction, multiplication, division
- ASCII values: Each character in C is represented by a unique integer value (ASCII).

### Example 1: **Sum and Difference of Two Numbers**

This program calculates the sum and difference of two numbers.

- [**AddSub.c**](Arithmetic/AddSub.c)

### Question 1: **Average of Marks**

Write a program that takes input as marks for 6 courses and calculates the average:

- [**AvgMarks.c**](Arithmetic/AvgMarks.c)

### Question 2: **Operator-Based Calculator**

Write a program that reads two numbers and an operator, then performs the corresponding arithmetic operation (+, -, *, /):

- [**Calc.c**](Arithmetic/Calc.c)

### Question 3: **Sum of Digits**

Write a program that calculates the sum of the digits of a number:

- [**DigSum.c**](Arithmetic/DigSum.c)
