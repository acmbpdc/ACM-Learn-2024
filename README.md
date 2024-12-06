# Learn-C-Programming
A beginner-friendly guide to learning C programming, covering fundamental concepts with example codes and explanations.
In this two-hour session, we will quickly revise the essential C programming concepts, focusing on building a solid foundation in:

- Basic Input/Output
- Simple arithmetic and ASCII operations
- Matrices
- Functions
- Arrays
- String Operations
- Pointers
- Recursion
- Structures
- Practice Questions

This session is perfect for beginners. By the end, you’ll be ready to implement these key concepts in your projects and exams!

## For the beginners

It's important to have a clear idea of how logic works in C.
The main aim of this session is to help you learn how to convert your logic into executable code.
For reference, check out the ACM foundations docs [here!](https://foundations.acmbpdc.org/Beginner-1/)

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

[**Add.c**](Matrices/Add.c)

### Question 1: **Diagonal Elements of a Matrix**

Write a program that prints only the diagonal elements of a matrix:

[**Diagonal.c**](Matrices/Diagonal.c)

# 4. Functions in C

Functions in C are blocks of code designed to perform specific tasks. They help in breaking down a large program into smaller, manageable pieces and improve code reusability.

Functions can either return a value or not, and they may take parameters as input. In C, a function is declared with the following syntax:

```c
return_type function_name(parameters) {
    // body of the function
}
```

 **Example 1: Add Two Numbers**  
   This function takes two integers as input, adds them, and prints the result.

   [**AddNumbers.c**](Functions/AddNumbers.c)


**Example 2: Find the Factorial of a Number**  
   This function takes an integer as input and calculates the factorial of that number using a loop.

   [**Factorial.c**](Functions/Factorial.c)
   

### Practice Question

**Write a function to find the larger of two numbers.**  
[**FindLarger.c**](Functions/FindLarger.c)

## 5. Arrays

In this section, we will learn how to handle arrays in C. Arrays allow you to store multiple values of the same type in a single variable, making it easier to manage large datasets.

### Example 1: Initializing and Printing an Array

This program initializes an array of integers and prints its values.

[**simple_array.c**](Arrays/simple_array.c)

### Example 2: Find the Largest Element in an Array

This program takes an array of integers and finds the largest element in the array.

[**largest_element.c**](Arrays/largest_element.c)

### Question 1: Reverse Array

Write a program that takes a list of integers from the user, stores them in an array, and prints the array in reverse order.

[**Reverse.c**](Arrays/Reverse.c)

 ## **6: String Operations**

### **String Functions Overview**
String operations in C involve manipulating sequences of characters that end with a null terminator (`\0`). Several built-in functions in `<string.h>` simplify common string-related tasks like copying, comparing, finding lengths, and concatenating.

---

### **Commonly Used String Functions**

| **String Function** | **Description**                                                                                             |
|----------------------|-----------------------------------------------------------------------------------------------------------|
| `strcpy(dest, src)`  | Copies the content of the source string into the destination string.                                       |
| `strcmp(str1, str2)` | Compares two strings:                                                                                     |
|                      | - Returns an integer < 0 if `str1` < `str2`.                                                              |
|                      | - Returns an integer > 0 if `str1` > `str2`.                                                              |
|                      | - Returns 0 if `str1` == `str2`.                                                                          |
| `strlen(str)`        | Returns the length of the string (excluding the `\0` character).                                          |
| `strcat(str1, str2)` | Concatenates `str2` to `str1`, storing the resultant string in `str1`.                                     |

> **Note**: Include `<string.h>` to use these functions. Always allocate enough space for the null character (`\0`) in your strings. For example:
> ```c
> char string[5]; // This can store up to 4 characters, with the 5th slot reserved for '\0'.
> ```

---

### **Example Code**
For a demonstration of all the above functions, please take a look at the file: 
[**all_funcs.c**](StringFunctions/all_funcs.c)

## **7. Pointers**
Pointers are variables that store the memory address of another variable. They are powerful tools in C that allow you to directly manipulate memory, create dynamic data structures, and optimize program performance.

### **Key Concepts**
- **Declaration**: `int *p;` declares a pointer to an integer.
- **Initialization**: Use the address-of operator (`&`) to assign an address to a pointer: `p = &var;`.
- **Dereferencing**: Access the value stored at the memory location using the dereference operator (`*`): `*p`.

#### **Example 1: Basic Pointer Operations**
This example demonstrates the basic use of pointers to store and access a variable's address and value.  
[**PointerBasics.c**](Pointers/PointerBasics.c)

#### **Example 2: Pointer Arithmetic**
This example shows how pointer arithmetic can be used to traverse an array.  
[**PointerArithmetic.c**](Pointers/PointerArithmetic.c)

#### **Example 3: Swapping Two Values Using Pointers**
This example demonstrates how pointers can be used to swap the values of two variables.  
[**SwapWithPointers.c**](Pointers/SwapWithPointers.c)

---

### **Key Takeaways**
1. **Pointers and Arrays**: Arrays and pointers are closely related. Pointer arithmetic can be used to navigate arrays.
2. **Swapping with Pointers**: Pointers allow direct manipulation of values, making swapping efficient.
3. **Safety**: Always ensure proper initialization of pointers and avoid dereferencing uninitialized or null pointers.

---

## **8. Recursion**

Recursion is like a magical spell where a function calls itself! It’s like standing between two mirrors and seeing infinite reflections—but with an exit strategy. In programming, recursion breaks down a problem into smaller instances of itself until it reaches a simple base case (the "exit strategy").  

Here’s a simple way to think about it:  
- You solve the *smallest version* of a problem (base case).  
- Use that to build up the solution to the bigger problem.  

---
#### **Example 1: Factorial of a Number**  
Calculate the factorial of a number `n` using recursion.  
[**Factorial.c**](Recursion/Factorial.c)

#### **Example 2: Fibonacci Sequence**  
Generate the nth Fibonacci number using recursion.  
[**Fibonacci.c**](Recursion/Fibonacci.c)

#### **Example 3: Sum of Digits**  
Find the sum of digits of a number using recursion.  
[**SumOfDigits.c**](Recursion/SumOfDigits.c)


#### **What’s happening behind the scenes?**
1. The function keeps calling itself, solving smaller chunks.  
2. When the base case is reached, the "unwinding" happens (like reverse dominoes).  
3. The answers combine into the final solution.

---
## **9. Structures**

Structures in C allow you to combine variables of different data types into a single entity. This is especially useful for organizing complex data like employee records, student information, etc. 

### **Key Features of Structures:**
- A structure groups related variables together under a single name.
- Each variable in the structure is called a "member."
- Structures can hold multiple data types.

**Example 1: Basic Student Structure**

This example demonstrates how to define a structure for student details and use it to store and display data.  
[Basic Student Structure](Structures/BasicStudent.c)

**Example 2: Employee Database Using Structures and Arrays**

This example showcases how to use structures and arrays together to manage an employee database.  
[Employee Database](Structures/EmployeeDatabase.c)

---
## **10. Practice Questions**

Here are 5 more challenging practice questions that mix different topics. They will test your understanding of functions, recursion, pointers, and string operations. Try solving them!


### **Question 1: String Reversal**
Write a function to reverse a string using recursion. You should not use any built-in functions like `strrev`. For example, given the input `"hello"`, the output should be `"olleh"`.

[Answer 1 - Function Practice](Practice/Question1.c)

---

### **Question 2: Find the Length of a String Without Using `strlen`**
Write a function that calculates the length of a string without using the `strlen` function. For example, given the input `"abcdef"`, the function should return `6`.

[Answer 2 - String Operations](Practice/Question2.c)

---

### **Question 3: Recursive Power Function**
Write a recursive function to calculate the power of a number. For example, if the input is `2` and the exponent is `3`, the output should be `8`. (i.e., `2^3 = 8`)

[Answer 3 - Pointers](Practice/Question3.c)

---

### **Question 4: Sum of Elements in an Array Using Pointers**
Write a function that calculates the sum of all elements in an array using pointers. For example, given the array `{1, 2, 3, 4, 5}`, the function should return `15`.

[Answer 4 - Recursion](Practice/Question4.c)

---

### **Question 5: Count Occurrences of a Character in a String**
Write a function that counts the number of occurrences of a given character in a string. For example, given the string `"programming"` and the character `'r'`, the function should return `2`.

[Answer 5 - Mixed Concepts](Practice/Question5.c)

   
