# Comprehensive Introduction to Object-Oriented Programming (OOP) in Java

## Table of Contents

1. [Prerequisites & Tools](#prerequisites--tools)  
2. [Common Libraries & Imports](#common-libraries--imports)  
3. [Basic Java Structure & Syntax](#basic-java-structure--syntax)  
   - [Data Types](#data-types)  
   - [Variables and Operators](#variables-and-operators)  
   - [Strings](#strings)  
   - [User Input & Output](#user-input--output)  
   - [Control Flow Statements](#control-flow-statements)  
   - [Take-Home Exercise 1 (Basic Concepts)](#take-home-exercise-1)  
4. [Object-Oriented Programming Basics](#object-oriented-programming-basics)  
   - [Classes & Objects](#classes--objects)  
   - [Constructors & Initialization](#constructors--initialization)  
   - [Access Modifiers & Encapsulation](#access-modifiers--encapsulation)  
   - [Methods & Parameters](#methods--parameters)  
   - [The this Keyword](#the-this-keyword)  
   - [static Keyword & Class Members](#static-keyword--class-members)  
   - [Take-Home Exercise 2 (OOP Basics)](#take-home-exercise-2)  
5. [Data Structures](#data-structures)  
   - [Arrays](#arrays)  
   - [ArrayList](#arraylist)  
   - [LinkedList](#linkedlist)  
   - [Enhanced for Loop & Iteration](#enhanced-for-loop--iteration)  
   - [Take-Home Exercise 3 (Data Structures)](#take-home-exercise-3)  
6. [Inheritance & Polymorphism](#inheritance--polymorphism)  
   - [Extending Classes](#extending-classes)  
   - [The super() Keyword](#the-super-keyword)  
   - [Abstract Classes](#abstract-classes)  
   - [Interfaces & implements](#interfaces--implements)  
   - [The Comparable Interface](#the-comparable-interface)  
   - [Take-Home Exercise 4 (Inheritance & Interfaces)](#take-home-exercise-4)  
7. [Exception Handling](#exception-handling)  
   - [try, catch, finally](#try-catch-finally)  
   - [Throwing Exceptions](#throwing-exceptions)  
   - [Custom Exceptions](#custom-exceptions)  
   - [Take-Home Exercise 5 (Exceptions)](#take-home-exercise-5)  
8. [Multithreading](#multithreading)  
   - [Creating Threads (Thread Class)](#creating-threads-thread-class)  
   - [Implementing Runnable](#implementing-runnable)  
   - [Synchronization & Shared Resources](#synchronization--shared-resources)  
   - [Take-Home Exercise 6 (Threads)](#take-home-exercise-6)  
9. [Conclusion](#conclusion)

## Prerequisites & Tools

Before diving into Java and OOP concepts, ensure you have the following in place:

1. **Java Development Kit (JDK)**:  
   
   - Download and install the latest JDK from Oracle’s website or an open-source distribution like AdoptOpenJDK.
   - Make sure `java -version` and `javac -version` work in your terminal/command prompt to confirm installation.

2. **Integrated Development Environment (IDE)**:  
   
   - While you can write code in a simple text editor, an IDE such as **IntelliJ IDEA**, **Eclipse**, or **Visual Studio Code** (with Java extensions) provides features like code completion, debugging tools, and easy project management.

3. **Command-Line Familiarity**:  
   
   - Understand how to compile and run Java programs using the command line:
     
     ```bash
     javac MyProgram.java
     java MyProgram
     ```
   - This helps in understanding the build process, even if you primarily use an IDE.

4. **Documentation & Resources**:  
   
   - Official Java Documentation: [https://docs.oracle.com/en/java/](https://docs.oracle.com/en/java/)
   - Online tutorials, reference materials, and community forums can provide additional guidance.

## Common Libraries & Imports

Java provides a robust standard library, organized into packages. Understanding commonly used packages makes development more efficient.

| Package                | Description                                                                                  |
| ---------------------- | -------------------------------------------------------------------------------------------- |
| `java.lang`            | Basic language classes (String, Math, System) are auto-imported.                             |
| `java.util`            | Utility classes (collections like ArrayList, LinkedList, HashMap, and classes like Scanner). |
| `java.io`              | Classes for input/output operations (File, FileReader, FileWriter).                          |
| `java.util.concurrent` | Classes for concurrency (Executors, Locks, Concurrent Collections).                          |

**Examples of Imports:**

```java
import java.util.ArrayList;
import java.util.Scanner;
import java.io.File;
```

- If a class is in the same package, you don’t need to import it.
- java.lang package is imported by default, so classes like String or Math do not require explicit import.

## Basic Java Structure & Syntax

A Java program is composed of one or more classes. Each class is defined in a `.java` file, and typically has this structure:

- **Class Declaration**: Uses the `class` keyword followed by the class name.
- **Fields (Variables)**: Store data for objects.
- **Methods**: Contain logic that operates on data.

### Entry Point: `main` Method

A standard Java application starts executing from the `main` method:

```java
public static void main(String[] args) {
    // Your code here
}
```

- ```public``` means it’s accessible by any class.
- ```static``` means it belongs to the class rather than an instance.
- ```void``` means it returns no value.
- ```String[]``` args is an array of command-line arguments passed to the program.

**Example:**

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, world!");
    }
}

Output:
Hello, world!
```

- The program defines a class ```Main```.
- Inside main, it prints ```"Hello, world!"``` to the console.
- When you run ```Main```, the main method is invoked and the message is displayed.

## Data Types

Data types define the nature of the data that can be stored in variables. In Java, data types fall broadly into two categories:

1. **Primitive Types**  
   Primitive types are the most basic data types built into the language. They store simple values directly and are not objects. Java’s primitive types include:
   
   - `int`: For integers (e.g., 10, -3), typically occupying 4 bytes of memory.
   
   - `double`: For decimal (floating-point) numbers (e.g., 3.14, -0.001), double precision.
   
   - `boolean`: For logical values (`true` or `false`).
   
   - `char`: For single characters (e.g., 'A', '9', '$'), typically using 2 bytes.
   
   - `byte`: For very small integers (-128 to 127), 1 byte.
   
   - `short`: For short integers (-32768 to 32767), 2 bytes.
   
   - `long`: For large integers (e.g., 1234567890), typically 8 bytes.
   
   - `float`: For single-precision floating-point numbers, typically 4 bytes.
     
     For most part, we would be using int, double, boolean and char. 

   **Example:**

```java
int age = 25;
double price = 19.99;
boolean isActive = true;
char letter = 'Z';
```

2. **Reference Types** Reference types store references (or addresses) to objects, rather than storing the object’s value directly. Common reference types include:
   
   - `String`: Represents text sequences.
   - `Arrays`: Collections of elements of the same type (e.g., int[]).
   - `Classes` and `Interfaces` you define.
     When you create a reference type variable, it points to an object in memory, or `null` if it doesn’t reference any object.
   
   **Example:**
   
   ```java
   String message = "Hello World";
   String another = null; // another does not point to any object yet
   ```

## Variables and Operators

Variables are named storage locations in your program’s memory that hold values. Operators are used to perform actions on these variables (such as arithmetic operations or comparisons).

### Variables

**Declaration and Initialization**:  
To use a variable, you first declare its type and name, and optionally assign it an initial value:

```java
int count; // Declaration
count = 10; // Initialization
int total = 5; // Declaration and initialization in one line
```

Note:

- Using meaningful variable names (e.g., ```studentAge```, ```totalPrice```)
- Java conventions recommend starting variable names with a lowercase letter and using camelCase and classes with a capital letter and using PascalCase. 

Scope:

- Variables declared inside a method are local to - that method.
- Variables declared at the class level (fields) are accessible throughout the class.
- Variables must be declared before they are used.

### Operators

Operators allow you to manipulate variables, perform calculations, and make comparisons.

1. Arithmetic Operators: + - * / %
   
   - ```+```: Addition
   
   - ```-```: Subtraction
   
   - ```*```: Multiplication
   
   - ```/```: Division
   
   - ```%```: Modulus (remainder after division)
     
     ```java
     int a = 10, b = 3;
     int sum = a + b;        // sum = 13
     int difference = a - b; // difference = 7
     int product = a * b;    // product = 30
     int quotient = a / b;   // quotient = 3 (integer division)
     int remainder = a % b;  // remainder = 1
     ```

2. Comparison Operators: == != > < >= <=
   
   - ```==```: Equal to
   
   - ```!=```: Not equal to
   
   - ```>```: Greater than
   
   - ```<```: Less than
   
   - ```>=```: Greater than or equal to
   
   - ```<=```: Less than or equal to
     
     ```java
     int x = 5, y = 10;
     boolean isEqual = (x == y);   // false
     boolean isGreater = (x > y);  // false
     boolean isLessOrEqual = (x <= y); // true
     ```

3. Logical Operators: && || !
   
   - ```&&``` (AND): true if both operands are true.
   - ```||``` (OR): true if at least one operand is true.
   - ```!``` (NOT): inverts the boolean value.

## Strings

Strings in Java are objects that represent sequences of characters. Unlike primitive types, strings are reference types. Java’s `String` class provides numerous methods for inspecting, modifying, and manipulating textual data.

**Key Points About Strings:**

- Immutable: Once created, the characters within a `String` object cannot be changed. Methods that appear to modify a string actually create and return a new `String` object.
- Common Methods:  
  - `length()`: Returns the number of characters in the string.  
  - `substring(start, end)`: Extracts a portion of the string from `start` (inclusive) to `end` (exclusive).  
  - `toUpperCase()` / `toLowerCase()`: Converts all characters to upper or lower case.  
  - `trim()`: Removes leading and trailing whitespace.  
  - `equals()` / `equalsIgnoreCase()`: Compares string content rather than memory references.
  - `charAt(index)`: Returns the character at the specified index (0-based).

**Example:**

```java
public class StringDemo {
    public static void main(String[] args) {
        String message = "   Hello Java   ";

        // Trimming whitespace
        String trimmed = message.trim(); // "Hello Java"

        // Lengh of the trimmed string
        int length = trimmed.length(); // 10 (H=0,e=1,l=2,l=3,o=4, =5,J=6,a=7,v=8,a=9)

        // Substring: extracting "Hello"
        String helloPart = trimmed.substring(0, 5); // "Hello"

        // Convert to uppercase
        String upper = trimmed.toUpperCase(); // "HELLO JAVA"

        // Check equality
        boolean isEqual = trimmed.equals("Hello Java"); // true
        boolean isIgnoreCaseEqual = trimmed.equalsIgnoreCase("hello java"); // true

        // Print results
        System.out.println("Original: [" + message + "]");
        System.out.println("Trimmed: [" + trimmed + "]");
        System.out.println("Length: " + length);
        System.out.println("Substring (0,5): " + helloPart);
        System.out.println("Uppercase: " + upper);
        System.out.println("Equals 'Hello Java': " + isEqual);
        System.out.println("EqualsIgnoreCase 'hello java': " + isIgnoreCaseEqual);
    }
}

```

```bash
Output:
Original: [   Hello Java   ]
Trimmed: [Hello Java]
Length: 10
Substring (0,5): Hello
Uppercase: HELLO JAVA
Equals 'Hello Java': true
EqualsIgnoreCase 'hello java': true
```

## User Input & Output

In Java, output is handled primarily by the `System.out` object, which provides methods such as `println()` and `print()` to send text to the console. For input, you can use classes like `Scanner` (from `java.util`) to read user-provided data.

**Key Points:**

- `System.out.println("message")` prints the message followed by a newline.
- `System.out.print("message")` prints the message without a newline.
- A `Scanner` connected to `System.in` reads input from the console.
- Methods like `nextLine()`, `nextInt()`, `nextDouble()` allow you to read different types of user input.
- Always `close()` the `Scanner` when you’re done to free resources.

**Example:**

```java
import java.util.Scanner;

public class IOExample {
    public static void main(String[] args) {
        Scanner sc = nw Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine(); // Reads an entire line of text

        System.out.print("Enter your age: ");
        int age = sc.nextInt(); // Reads an integer

        System.out.println("Hello " + name + ", you are " + age + " years old.");

        sc.close();
    }
}
```

```bash
Output:
- Program prompts: "Enter your name: "
- User types "Alice"
- `name` = "Alice"
- Program prompts: "Enter your age: "
- User types "30"
- `age` = 30
- Prints "Hello Alice, you are 30 years old."
- Closes `Scanner`.
```

## Control Flow Statements

Control flow statements determine the order in which statements in a program are executed. They allow you to make decisions, repeat certain actions multiple times, and choose different paths of execution.

**Common Control Flow Statements:**

- `if`, `else if`, `else`: Execute code blocks conditionally.
- `switch`: Select one of several cases to execute based on a variable’s value.
- `for`: Repeat a block of code a specific number of times.
- `while`: Repeat a block of code while a condition remains true.
- `do-while`: Similar to `while`, but ensures the code block executes at least once.

### if/else

Use `if` to execute code only if a condition is true. Add `else` to handle the case where it’s not true, and `else if` for multiple conditions.

**Example:**

```java
int num = 10;
if (num > 10) {
    System.out.println("Greater than 10");
} else if (num == 10) {
    System.out.println("Equal to 10");
} else {
    System.out.println("Less than 10");
}
```

**Dry Run Explanation:**

- `num = 10`
- `num > 10`? No, that’s false.
- `num == 10`? Yes, that’s true.
- Prints: ```"Equal to 10"```

### switch

`switch` allows selection of a code block from multiple options (cases) based on a variable’s value. It can be more readable than multiple `if/else if` statements.

**Example:**

```java
int day = 3;
switch (day) {
    case 1: System.out.println("Monday"); break;
    case 2: System.out.println("Tuesday"); break;
    case 3: System.out.println("Wednesday"); break;
    default: System.out.println("Other day");
}
```

**Dry Run Explanation:**

- ```day = 3```
- Checks ```case 1```: no match.
- Checks ```case 2```: no match.
- Checks ```case 3```: matches, prints "Wednesday" and breaks out of the switch.

### for Loop

Use `for` when you know how many times you need to repeat a block of code.

**Example:**

```java
for (int i = 0; i < 3; i++) {
    System.out.println("i = " + i);
}
```

**Dry Run Explanation:**

- ```i=0```: check ```i<3``` (true), print "i = 0"
- i++ → i=1
- check ```i<3``` (true), print "i = 1"
- i++ → i=2
- check ```i<3``` (true), print "i = 2"
- i++ → i=3
- check ```i<3``` (false), exit loop

**Output:**

- i = 0
- i = 1
- i = 2

### while Loop

Use `while` to repeat a block as long as a condition is true.

**Example:**

```java
int count = 0;
while (count < 3) {
    System.out.println(count);
    count++;
}
```

**Dry Run Explanation:**

- count=0: check count<3 (true), print "0", count=1
- count=1: check count<3 (true), print "1", count=2
- count=2: check count<3 (true), print "2", count=3
- count=3: check count<3 (false), exit loop

**Output:**
0 1 2

### do-while Loop

Similar to `while`, but executes the loop body at least once before checking the condition.

**Example:**

```java
int n = 0;
do {
    System.out.println(n);
    n++;
} while (n < 1);
```

**Dry Run Explanation:**

- Enter do block with n=0, print "0", n=1
- Check condition n<1? (1<1 false) exit loop

### Take-Home Exercise 1

This exercise will combine the concepts learned so far. It will:

1. Prompt the user to enter a sentence (string).
2. Ask for a number indicating how many times to repeat a certain action.
3. Use variables and operators to calculate information.
4. Use control flow (if/else, for loop) to process and output results.

```java
import java.util.Scanner;

public class CombinedDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Step 1: Prompt user for a sentence
        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine();

        // Step 2: Ask for a number (int)
        System.out.print("Enter a number: ");
        int count = sc.nextInt();

        // Trim the sentence to remove extra spaces
        String trimmed = sentence.trim();
        int length = trimmed.length();

        // If length is zero, it means the user entered only spaces
        if (length == 0) {
            System.out.println("You entered an empty or whitespace-only sentence.");
        } else {
            // Print details about the sentence
            System.out.println("Your sentence: [" + trimmed + "]");
            System.out.println("Length: " + length);

            // If count is positive, repeat printing the sentence that many times
            if (count > 0) {
                System.out.println("Printing your sentence " + count + " times:");
                for (int i = 1; i <= count; i++) {
                    System.out.println(i + ": " + trimmed);
                }
            } else {
                System.out.println("The number entered is not positive. No repetition will occur.");
            }
        }

        sc.close();
    }
}
```

**Test Run Scenario:**

- User Input:
  ```   Hello Java World   ```
  ```3```

## Object-Oriented Programming Basics

Object-Oriented Programming (OOP) allows you to model real-world entities as objects in code. Each object is an instance of a class and can contain data (fields) and methods (functions) that operate on that data. OOP principles (such as encapsulation, inheritance, and polymorphism) help in creating modular, reusable, and maintainable code.

### Classes & Objects

A **class** is a blueprint or template for creating objects. An **object** is an instance of a class. Classes define the structure (fields) and behaviors (methods) that their objects will have.

```java
public class Person {
    String name;
    int age;
}

public class Main {
    public static void main(String[] args) {
        Person p = new Person(); // Creates a new Person object
        p.name = "Alice";
        p.age = 30;
        System.out.println("Name: " + p.name + ", Age: " + p.age);
    }
}
```

**Dry Run:**

- `new Person()` creates an object of type Person.
- Assign `p.name = "Alice"`, `p.age = 30`.
- Print the fields.

**Output:**
Name: Alice, Age: 30

### Constructors & Initialization

A **constructor** is a special method that initializes new objects. It has the same name as the class and no return type. If you don’t define one, Java provides a default constructor. Constructors ensure that an object starts its life in a valid state.

```java
public class Car {
    String model;
    int year;

    public Car(String model, int year) {
        this.model = model;
        this.year = year;
    }
}

public class Main {
    public static void main(String[] args) {
        Car c = new Car("Toyota", 2020); // Calls the Car constructor
        System.out.println("Model: " + c.model + ", Year: " + c.year);
    }
}
```

**Dry Run:**

- `new Car("Toyota",2020)` calls the constructor, sets `model` and `year`.
- Print model and year.

**Output:**
Model: Toyota, Year: 2020

### Access Modifiers & Encapsulation

**Access modifiers** control the visibility of classes, fields, and methods:

- `public`: Accessible from anywhere.
- `private`: Accessible only within the same class.
- `protected`: Accessible within the same package or subclasses.
- (default, no modifier): Accessible within the same package.

**Encapsulation** is about hiding the internal state of objects and providing controlled ways to access and modify it. Typically, you make fields private and use public getter/setter methods to control access.

'java
public class BankAccount {
    private double balance;

    public BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        }
    }
    
    public double getBalance() {
        return balance;
    }
    
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

}
'

**Dry Run:**

- Fields are private.
- `getBalance()` returns the balance.
- `deposit()` adds to balance if amount > 0.

This code alone produces no output. Another class calling `getBalance()` or `deposit()` would print results as needed.

### Methods & Parameters

**Methods** define behaviors. They can have parameters (inputs) and return values.

```java
public class Calculator {
    public int add(int a, int b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        int result = calc.add(5,3); // Calls add method
        System.out.println("Sum: " + result);
    }
}
```

**Dry Run:**

- `add(5,3)` returns 8.
- Print "Sum: 8".

**Output:**
Sum: 8

### this Keyword

`this` refers to the current object instance. It’s often used when parameter names clash with field names, or for clarity when referencing fields within methods.

```java
public class Person {
    String name;

    public Person(String name) {
        this.name = name; // 'this.name' refers to the instance field
    }
}
```

No direct output. The `this` keyword ensures the constructor sets the instance field `name` to the provided parameter.

### static Keyword & Class Members

`static` means the member belongs to the class itself, not to any specific instance. Use static methods for utility functions that don’t rely on instance data.

```java
public class MathUtils {
    public static int square(int x) {
        return x * x;
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println(MathUtils.square(5)); // Call static method directly
    }
}
```

**Dry Run:**

- `square(5)` returns 25.
- Print 25.

**Output:**
25

### Take-Home Exercise 2

This example shows encapsulation, constructors, and methods all together.

```java
public class Product {
    private String name;
    private double price;

    public Product(String name, double price) {
        if (price < 0) {
            throw new IllegalArgumentException("Price cannot be negative");
        }
        this.name = name;
        this.price = price;
    }

    public void setPrice(double newPrice) {
        if (newPrice >= 0) {
            this.price = newPrice;
        }
    }

    public double getPrice() {
        return price;
    }

    public void printInfo() {
        System.out.println("Product: " + name + ", Price: " + price);
    }
}

public class Main {
    public static void main(String[] args) {
        Product p = new Product("Book", 9.99);
        p.printInfo();
        p.setPrice(12.50);
        System.out.println("Updated Price: " + p.getPrice());
    }
}
```

**Dry Run:**

- Creates Product "Book", 9.99.
- printInfo -> "Product: Book, Price: 9.99"
- setPrice(12.50), getPrice -> 12.5

**Output:**
Product: Book, Price: 9.99 Updated Price: 12.5

## Data Structures

Data structures are ways of organizing and storing data so that they can be used efficiently. In Java, you can use basic arrays as well as more flexible and powerful structures provided by the standard library.

### Arrays

Arrays are fixed-size collections that hold elements of the same type. Once an array is created, its size cannot change.

```java
int[] numbers = new int[3];
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;

for (int i = 0; i < numbers.length; i++) {
    System.out.println("Index " + i + ": " + numbers[i]);
}
```

**Dry Run:**

- Create an integer array of size 3.
- Assign values: numbers[0]=10, numbers[1]=20, numbers[2]=30.
- Loop through the array indices and print each element.

**Output:**
Index 0: 10 
Index 1: 20 
Index 2: 30

### ArrayList

An `ArrayList` is a dynamic array from `java.util`, which can grow or shrink as needed. Unlike arrays, you don’t need to know the size in advance.

Key methods:

- `add(value)`: Append an element.
- `get(index)`: Retrieve element at index.
- `size()`: Get current size.
- `remove(index)`: Remove element at index.

```java
import java.util.ArrayList;

public class ListExample {
    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<>();
        names.add("Alice");
        names.add("Bob");
        System.out.println("Size: " + names.size());
        System.out.println("First: " + names.get(0));
    }
}
```

**Dry Run:**

- Create an ArrayList of Strings.
- Add "Alice" and "Bob".
- size() = 2, get(0) = "Alice".

**Output:**
Size: 2 
First: Alice

### LinkedList

A `LinkedList` (in `java.util`) stores elements as a chain of nodes. It’s good for scenarios where insertions/deletions in the middle are common.

```java
import java.util.LinkedList;

public class LinkedDemo {
    public static void main(String[] args) {
        LinkedList<Integer> nums = new LinkedList<>();
        nums.add(10);
        nums.addFirst(5);
        nums.addLast(20);

        for (int n : nums) {
            System.out.println(n);
        }
    }
}
```

**Dry Run:**

- Add 10, then addFirst(5) → list is [5,10]
- addLast(20) → list is [5,10,20]
- Print elements: 5, then 10, then 20.

**Output:**
5 10 20

### Enhanced for Loop & Iteration

The enhanced for loop (also known as the for-each loop) simplifies iteration over arrays and collections.

```java
int[] arr = {1,2,3};
for (int val : arr) {
    System.out.println(val);
}
```

**Dry Run:**

- val takes each element of arr in turn.
- Prints 1, then 2, then 3.

**Output:**
1 2 3

### Take-Home Exercise 3

This example will use a `Scanner` to get input from the user, store the inputs in an `ArrayList`, and then print them out.

```java
import java.util.ArrayList;
import java.util.Scanner;

public class DataStructureDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> items = new ArrayList<>();

        System.out.print("How many items to add? ");
        int count = sc.nextInt();
        sc.nextLine(); // consume the leftover newline

        for (int i = 0; i < count; i++) {
            System.out.print("Enter item " + (i+1) + ": ");
            String item = sc.nextLine();
            items.add(item);
        }

        System.out.println("You entered:");
        for (String it : items) {
            System.out.println(it);
        }

        sc.close();
    }
}
```

**Input:**
3
Apple
Banana
Cherry

**Dry Run:**

- Ask user for count=3.
- Loop 3 times, read each item from user and add to `items`.
- Print all items.

## Inheritance & Polymorphism

**Inheritance** allows you to create new classes based on existing ones. A subclass (child) inherits the fields and methods of its superclass (parent), reducing code duplication and promoting reuse.

**Polymorphism** allows objects of different subclasses to be treated as objects of a parent class, enabling them to respond differently to the same method call.

### Extending Classes

When one class extends another, it inherits all accessible members of the parent class.

```java
public class Animal {
    public void eat() {
        System.out.println("Eating...");
    }
}

public class Dog extends Animal {
    public void bark() {
        System.out.println("Barking...");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat();  // Inherited from Animal
        d.bark(); // Defined in Dog
    }
}
```

**Dry Run:**

- `new Dog()` creates a Dog object that can `eat()` (from Animal) and `bark()` (from Dog).
- Prints "Eating..." then "Barking...".

**Output:**
Eating... 
Barking...

### The super() Keyword

`super()` calls the parent class constructor or accesses its methods/fields. Useful for initializing inherited fields or calling overridden methods.

```java
public class Animal {
    protected String name;
    public Animal(String name) {
        this.name = name;
    }
}

public class Dog extends Animal {
    public Dog(String name) {
        super(name); // Calls Animal(name) constructor
    }

    public void printName() {
        System.out.println("Dog's name: " + name);
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog("Rex");
        d.printName();
    }
}
```

**Dry Run:**

- `new Dog("Rex")` calls `super("Rex")` to initialize `name`.
- `printName()` prints "Dog's name: Rex".

**Output:**
Dog's name: Rex

### Abstract Classes

An abstract class cannot be instantiated and may contain abstract methods (methods without bodies). Subclasses must implement these abstract methods, enforcing a certain structure or contract.

```java
public abstract class Shape {
    abstract double getArea();
}

public class Circle extends Shape {
    double radius;
    public Circle(double r) {
        radius = r;
    }
    double getArea() {
        return Math.PI * radius * radius;
    }
}

public class Main {
    public static void main(String[] args) {
        Shape s = new Circle(5);
        System.out.println("Area: " + s.getArea());
    }
}
```

**Dry Run:**

- `Circle(5)` sets radius=5.
- `getArea()` calculates π*5*5 ≈ 78.5398.

**Output:**
Area: 78.53981633974483

### Interfaces & implements

An interface defines methods without implementations. A class that implements an interface must provide the method bodies. This promotes flexible code since many classes can implement the same interface differently.

```java
public interface Printable {
    void print();
}

public class Document implements Printable {
    public void print() {
        System.out.println("Printing document...");
    }
}

public class Main {
    public static void main(String[] args) {
        Printable p = new Document(); // Polymorphic reference
        p.print();
    }
}
```

**Dry Run:**

- `new Document()` creates a Document that implements Printable.
- `p.print()` calls Document's print method.

**Output:**
Printing document...

### The Comparable Interface

`Comparable<T>` defines a natural ordering for objects. Implement `compareTo()` to specify how objects should be compared. This allows using sorting utilities like `Collections.sort()`.

```java
public class Person implements Comparable<Person> {
    String name;
    public Person(String name) {
        this.name = name;
    }
    public int compareTo(Person other) {
        return this.name.compareTo(other.name);
    }
}

import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        ArrayList<Person> people = new ArrayList<>();
        people.add(new Person("Zoe"));
        people.add(new Person("Alice"));
        people.add(new Person("Bob"));

        Collections.sort(people);
        for (Person p : people) {
            System.out.println(p.name);
        }
    }
}
```

**Dry Run:**

- Compare persons by name.
- Sort results: "Alice", "Bob", "Zoe".

**Output:**
Alice Bob Zoe

### Take-Home Exercise 4

This example demonstrates a class extending an abstract class and implementing an interface simultaneously.

```java
interface Drivable {
    void drive();
}

abstract class Vehicle {
    abstract void refuel();
}

class Car extends Vehicle implements Drivable {
    private String model;

    public Car(String model) {
        this.model = model;
    }

    void refuel() {
        System.out.println(model + " is refueling.");
    }

    public void drive() {
        System.out.println(model + " is driving.");
    }
}

public class Main {
    public static void main(String[] args) {
        Car c = new Car("Sedan");
        c.refuel();
        c.drive();
    }
}
```

**Dry Run:**

- `Car("Sedan")` initializes model="Sedan".
- `refuel()` prints "Sedan is refueling."
- `drive()` prints "Sedan is driving."

## Exception Handling

Exceptions represent unexpected or erroneous conditions in a program’s flow. Proper exception handling ensures that your program can either recover from errors or at least fail gracefully.

### try, catch, finally

- `try` block: Contains code that might throw an exception.
- `catch` block: Handles a specific type of exception if thrown.
- `finally` block: Executes code regardless of whether an exception occurred (often used for cleanup).

```java
public class ExceptionDemo {
    public static void main(String[] args) {
        try {
            int result = 10 / 0; // This will throw ArithmeticException
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("Finally block runs regardless of exceptions.");
        }
    }
}
```

**Dry Run:**

- Attempt `10/0` → ArithmeticException thrown.
- `catch` block prints error message.
- `finally` block executes after `catch`.

**Possible Output:**
Error: / by zero Finally block runs regardless of exceptions.

### Throwing Exceptions

You can explicitly throw exceptions when your code encounters a condition it cannot handle.

```java
public void validateAge(int age) {
    if (age < 18) {
        throw new IllegalArgumentException("Must be 18 or older");
    }
}
```

**Dry Run:**

- If `age < 18`, throws IllegalArgumentException.
- No direct output; depends on how this method is used. If called with `age=15`, an exception is thrown.

### Custom Exceptions

Create your own exception classes for application-specific error conditions. This makes errors more meaningful and easier to track.

```java
class MyCustomException extends Exception {
    public MyCustomException(String message) {
        super(message);
    }
}

public class Validator {
    public void checkValue(int val) throws MyCustomException {
        if (val < 0) {
            throw new MyCustomException("Value cannot be negative");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Validator v = new Validator();
        try {
            v.checkValue(-1);
        } catch (MyCustomException e) {
            System.out.println("Caught: " + e.getMessage());
        }
    }
}
```

**Dry Run:**

- `checkValue(-1)` throws MyCustomException.
- `catch` block prints the exception message.

**Output:**
Caught: Value cannot be negative

### Take-Home Exercise 5

Integrate user input with exception handling:

```java
import java.util.Scanner;

public class ExceptionCombined {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int number = sc.nextInt();

        try {
            if (number < 0) {
                throw new IllegalArgumentException("Negative value not allowed");
            }
            System.out.println("You entered: " + number);
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("End of input check.");
            sc.close();
        }
    }
}
```

**Input:**
-5

**Dry Run:**

- number=-5
- `if (number<0)` → true, throw IllegalArgumentException
- catch prints error message
- finally prints "End of input check."

## Multithreading

Multithreading allows multiple parts of your program to run concurrently. This can improve responsiveness and performance, especially on systems with multiple CPU cores.

Key concepts:

- A **thread** is an independent path of execution.
- Java provides the `Thread` class and the `Runnable` interface to define and start new threads.
- Synchronization and shared resources need careful handling to avoid conflicts.

### Creating Threads (Thread Class)

You can create a thread by extending the `Thread` class and overriding its `run()` method.

```java
public class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread t = new MyThread();
        t.start(); // starts the thread, calls run() method in a new thread
        System.out.println("Main thread ends");
    }
}
```

**Dry Run:**

- `MyThread` is a custom thread.
- `t.start()` creates a new thread that executes `t.run()`.
- Main thread prints "Main thread ends".

**Output:**
Main thread ends Thread is running...

### Implementing Runnable

Instead of extending `Thread`, you can implement the `Runnable` interface. This separates the task from the threading mechanism.

```java
public class Worker implements Runnable {
    public void run() {
        System.out.println("Worker running");
    }
}

public class Main {
    public static void main(String[] args) {
        Thread t = new Thread(new Worker());
        t.start();
        System.out.println("Main done");
    }
}
```

**Dry Run:**

- `new Worker()` provides a run() method.
- `new Thread(new Worker())` uses Worker’s run() when started.
- `t.start()` executes run() in a separate thread.

**Output:**
Main done Worker running

### Synchronization & Shared Resources

When multiple threads share data, conflicts can arise. Use synchronization to ensure that only one thread accesses critical code at a time.

```java
public class Counter {
    private int count = 0;

    public synchronized void increment() {
        count++;
    }

    public int getCount() {
        return count;
    }
}

public class Main {
    public static void main(String[] args) throws InterruptedException {
        Counter c = new Counter();

        Thread t1 = new Thread(() -> {
            for (int i=0; i<1000; i++) c.increment();
        });

        Thread t2 = new Thread(() -> {
            for (int i=0; i<1000; i++) c.increment();
        });

        t1.start();
        t2.start();
        t1.join(); // wait for t1 to finish
        t2.join(); // wait for t2 to finish

        System.out.println("Final count: " + c.getCount());
    }
}
```

**Dry Run:**

- Two threads each increment count 1000 times.
- `synchronized` ensures increments don’t interfere with each other.
- After both finish, count should be 2000.

**Output:**
Final count: 2000

### Take-Home Exercise 6

This example shows multiple threads each performing a simple task with delays, demonstrating concurrency.

```java
public class TaskRunner implements Runnable {
    private String taskName;

    public TaskRunner(String taskName) {
        this.taskName = taskName;
    }

    public void run() {
        for (int i=1; i<=3; i++) {
            System.out.println(taskName + " - iteration " + i);
            try {
                Thread.sleep(100); // simulate some work
            } catch (InterruptedException e) {
                System.out.println(taskName + " interrupted");
            }
        }
    }
}

public class Main {
    public static void main(String[] args) throws InterruptedException {
        Thread t1 = new Thread(new TaskRunner("Task1"));
        Thread t2 = new Thread(new TaskRunner("Task2"));

        t1.start();
        t2.start();

        t1.join(); // wait for t1 to complete
        t2.join(); // wait for t2 to complete

        System.out.println("All tasks completed.");
    }
}
```

**Dry Run:**

- Task1 and Task2 run simultaneously.
- Each prints iterations with a short pause.
- Main waits for both threads before printing "All tasks completed."

# Conclusion

Throughout this guide, we explored the core aspects of Java programming, starting from basic syntax, data types, and control flow, then moving into object-oriented principles such as classes, objects, inheritance, and interfaces. We examined data structures (arrays, ArrayList, LinkedList) and learned how to handle unexpected conditions using exceptions. Finally, we discussed multithreading to achieve concurrency in our programs.

By understanding these concepts, you can write cleaner, more maintainable, and more efficient Java code. As you continue coding, remember to practice, experiment, and refer to official documentation and community resources. This foundational knowledge will help you as you explore more advanced frameworks, APIs, and design patterns in Java.

# Complete Example Incorporating All Concepts

The following code example combines many of the discussed concepts:

- Basic syntax (variables, data types, operators, control flow)
- Object-oriented programming (classes, inheritance, interfaces, encapsulation)
- Data structures (ArrayList)
- Exception handling
- Comparable interface for sorting
- User input and output
- Multithreading for parallel tasks

## Scenario

We will create a small application that:

1. Prompts the user to enter a list of students.
2. Each student has a name, age, and grade. The `Student` class will inherit from an abstract `Person` class.
3. We will implement an interface `Printable` to print student details.
4. We will use the `Comparable` interface to sort students by name.
5. We will handle exceptions if the user enters invalid data (such as a negative age).
6. We will store students in an `ArrayList` and use a separate thread to simulate a slow processing task (e.g., calculating average age).
7. We will print results after sorting, and also print the final results after the separate thread finishes its work.

## Code Example

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

// Interface for printing details
interface Printable {
    void printInfo();
}

// Abstract Person class
abstract class Person {
    protected String name;
    protected int age;

    public Person(String name, int age) {
        if (age < 0) {
            throw new IllegalArgumentException("Age cannot be negative");
        }
        this.name = name;
        this.age = age;
    }

    public abstract String getDescription();
}

// Student class extends Person and implements Printable, Comparable
class Student extends Person implements Printable, Comparable<Student> {
    private double grade;

    public Student(String name, int age, double grade) {
        super(name, age);
        this.grade = grade;
    }

    @Override
    public String getDescription() {
        return "Student: " + name + ", Age: " + age + ", Grade: " + grade;
    }

    @Override
    public void printInfo() {
        System.out.println(getDescription());
    }

    // Compare students by name
    @Override
    public int compareTo(Student other) {
        return this.name.compareTo(other.name);
    }

    public int getAge() {
        return this.age;
    }
}

// A separate task to calculate average age in a different thread
class AverageAgeCalculator implements Runnable {
    private ArrayList<Student> students;
    private double averageAge;

    public AverageAgeCalculator(ArrayList<Student> students) {
        this.students = students;
    }

    @Override
    public void run() {
        try {
            // Simulate a slow calculation
            Thread.sleep(500); 
            int totalAge = 0;
            for (Student s : students) {
                totalAge += s.getAge();
            }
            averageAge = students.size() > 0 ? (double) totalAge / students.size() : 0.0;
        } catch (InterruptedException e) {
            System.out.println("Calculation interrupted.");
        }
    }

    public double getAverageAge() {
        return averageAge;
    }
}

public class CompleteDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<>();

        System.out.print("How many students? ");
        int count = sc.nextInt();
        sc.nextLine(); // consume leftover newline

        for (int i = 0; i < count; i++) {
            System.out.print("Enter name for student " + (i+1) + ": ");
            String name = sc.nextLine().trim();

            System.out.print("Enter age for " + name + ": ");
            int age = sc.nextInt();

            System.out.print("Enter grade for " + name + ": ");
            double grade = sc.nextDouble();
            sc.nextLine(); // consume newline

            try {
                // Create student object
                Student s = new Student(name, age, grade);
                students.add(s);
            } catch (IllegalArgumentException e) {
                System.out.println("Invalid data: " + e.getMessage());
                i--; // retry this iteration
            }
        }

        // Sort students by name using Comparable
        Collections.sort(students);

        // Print students after sorting
        System.out.println("\nStudents sorted by name:");
        for (Student s : students) {
            s.printInfo();
        }

        // Start a thread to calculate the average age
        AverageAgeCalculator calc = new AverageAgeCalculator(students);
        Thread t = new Thread(calc);
        t.start();

        // While the thread works, we could do other tasks
        // For demonstration, we just wait for it to finish
        try {
            t.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        // Print the calculated average age
        System.out.println("\nAverage Age of Students: " + calc.getAverageAge());

        sc.close();
    }
}
```

## Input:

3 
Alice 
20 
85.5 
Bob 
19 
90 
Charlie 
22 
88

## Dry Run Explanation:

1. Ask user for count=3.
2. Read details for Alice, age=20, grade=85.5; create Student object.
3. Read details for Bob, age=19, grade=90; create Student object.
4. Read details for Charlie, age=22, grade=88; create Student object.
5. Add all to ArrayList.
6. Sort students by name: Alice, Bob, Charlie.
7. Print sorted list.
8. Start a thread to compute average age: (20+19+22)/3 ≈ 20.3333.
9. Wait for the thread to finish.
10. Print the average age.

## Possible Output:

How many students? 3 
Enter name for student 1: Alice 
Enter age for Alice: 20 
Enter grade for Alice: 85.5 
Enter name for student 2: Bob 
Enter age for Bob: 19 
Enter grade for Bob: 90 
Enter name for student 3: Charlie 
Enter age for Charlie: 22 
Enter grade for Charlie: 88

Students sorted by name: 
Student: Alice, Age: 20, Grade: 85.5 
Student: Bob, Age: 19, Grade: 90.0 
Student: Charlie, Age: 22, Grade: 88.0
Average Age of Students: 20.333333333333332
