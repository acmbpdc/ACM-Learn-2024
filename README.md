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

[**AddSub.c**](Arithmetic/AddSub.c)

### Question 1: **Average of Marks**

Write a program that takes input as marks for 6 courses and calculates the average:

[**AvgMarks.c**](Arithmetic/AvgMarks.c)

### Question 2: **Operator-Based Calculator**

Write a program that reads two numbers and an operator, then performs the corresponding arithmetic operation (+, -, *, /):

[**Calc.c**](Arithmetic/Calc.c)

### Question 3: **Sum of Digits**

Write a program that calculates the sum of the digits of a number:

[**DigSum.c**](Arithmetic/DigSum.c)


## 3. Matrices

In this section, we will work with matrix operations. Let's start by adding matrices and then move on to extracting diagonal elements.

### Example 1: **Addition of Two Matrices**

This program demonstrates how to add two matrices as well as taking input for the matrices.

- [**Add.c**](Matrices/Add.c)

### Question 1: **Diagonal Elements of a Matrix**

Write a program that prints only the diagonal elements of a matrix:

- [**Diagonal.c**](Matrices/Diagonal.c)

# 4. Functions in C

Functions in C are blocks of code designed to perform specific tasks. They help in breaking down a large program into smaller, manageable pieces and improve code reusability.

Functions can either return a value or not, and they may take parameters as input. In C, a function is declared with the following syntax:

```c
return_type function_name(parameters) {
    // body of the function
}


