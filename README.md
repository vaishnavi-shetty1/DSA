# DLL.c
This C program implements a Doubly Linked List (DLL) to manage employee records. The program allows various operations such as inserting and deleting nodes from the front or end of the list, as well as performing Double Ended Queue (DEQ) operations using the DLL structure.

Features
* Employee Node contains the following attributes:
  * SSN (Social Security Number)
  * Name
  * Department
  * Designation
  * Salary
  * Phone Number
* Operations supported:
  * Insert at Front – Adds an employee node at the front of the list.
  * Insert at End – Adds an employee node at the end of the list.
  * Delete from Front – Removes the employee node from the front of the list.
  * Delete from End – Removes the employee node from the end of the list.
  * Double Ended Queue Demo – A demonstration of queue operations (Insert and Delete at both ends).
  * Display – Displays all employee nodes in the DLL.

# SCLL.c
This project demonstrates the implementation of basic polynomial operations (evaluation and addition) on polynomials in three variables (x, y, z). The program uses linked lists to represent polynomials and provides a menu-driven interface to evaluate polynomials and find the sum of two polynomials.

Features
- Polynomial Representation: Polynomials are represented as a linked list where each node contains the coefficient and exponents of x, y, and z.
- Polynomial Evaluation: Given a polynomial and values for x, y, and z, the program evaluates the polynomial.
- Polynomial Addition: The program can sum two polynomials term by term, combining like terms (i.e., terms with the same exponents for x, y, and z).

Functions
1. getnode() : Allocates memory for a new polynomial node and returns a pointer to it.
2. attach(int coef, int xexp, int yexp, int zexp, NODE head) : Attaches a new term (with a given coefficient and exponents) to the linked list that represents the polynomial.
3. read_poly(NODE head) : Reads a polynomial from the user, where each term consists of a coefficient and the exponents of x, y, and z.
4. display(NODE head) : Displays the polynomial stored in the linked list in a human-readable format.
5. poly_evaluate(NODE head) : Evaluates the polynomial for given values of x, y, and z and returns the result.
6. poly_sum(NODE head1, NODE head2, NODE head3) : Calculates the sum of two polynomials and returns a new polynomial that represents the sum.
7. main() : The main function provides a menu for the user to choose between evaluating a polynomial or adding two polynomials.

Menu Options
1. Represent and Evaluate a Polynomial P(x, y, z)

    Allows the user to input a polynomial and its values for x, y, and z, then evaluates and displays the result.

2. Find the Sum of Two Polynomials POLY1(x, y, z)

    Allows the user to input two polynomials and calculates their sum.

3. Exit

    Exits the program.

# SLL.c
This C program implements a Singly Linked List (SLL) to manage student data with the following operations:
* Insert student data at the front of the list.
* Insert student data at the end of the list.
* Delete student data from the front of the list.
* Delete student data from the end of the list.
* Stack demo for insertion and deletion at the front (LIFO).
* Display all student data stored in the list.
  
Features
* Each student is represented as a node containing:
  * USN (University Serial Number)
  * Name
  * Branch
  * Semester
  * Phone Number
* Menu-driven interface allows the user to:
  * Create a linked list with multiple student records.
  * Insert a student at the front or end.
  * Delete a student from the front or end.
  * Display all the student records.
  * Demonstrate stack operations with insertion and deletion at the front.
  
Program Functions
1. create() – Creates a new student node and inserts it at the front or end of the list.
2. insertfront() – Inserts a new student node at the front of the list.
3. deletefront() – Deletes a student node from the front of the list.
4. insertend() – Inserts a new student node at the end of the list.
5. deleteend() – Deletes a student node from the end of the list.
6. display() – Displays all student data in the list.
7. stackdemo() – Demonstrates stack operations (Push and Pop) using the front of the linked list.

# calendar.c
This program allows the user to manage a weekly activity calendar. It dynamically stores details for each day of the week, such as the day name, date, and activity. The program allows the user to input these details, displays the entire week's schedule, and ensures that memory is properly managed with dynamic allocation and deallocation.

Features
* Dynamic Memory Allocation: Memory for day names and activities is allocated dynamically, so it can handle input of varying sizes.
* User Input: The program allows the user to input the name of the day, the date, and the activity for each day.
* Display the Weekly Schedule: After entering the details, the program displays the week's schedule in a formatted table.
* Memory Management: Allocated memory is freed after use to prevent memory leaks.

# hanoi.c
This C program solves the Tower of Hanoi puzzle using recursion. It calculates the minimum number of moves required to transfer all discs from the source peg to the destination peg while adhering to the rules of the game:

* Only one disc can be moved at a time.
* A disc can only be placed on top of a larger disc or on an empty peg.
* The puzzle involves moving all the discs from the source peg to the destination peg with the help of an auxiliary (temporary) peg.
The program prints the sequence of moves required to solve the puzzle for a given number of discs.

Features
* Solves the Tower of Hanoi puzzle for any number of discs.
* Displays each move in the format "Move disc X from A to B" where A and B are pegs, and X is the disc number.
* Calculates and displays the total number of moves needed to solve the puzzle, which is 2^n - 1 where n is the number of discs.

# patternmatching.c
This C program performs a simple pattern matching and replacement operation on a given string. The program takes in three inputs:
* Main string - the string in which the pattern will be searched.
* Pattern string - the substring that will be searched for within the main string.
* Replace string - the substring that will replace the first occurrence of the pattern in the main string.
  
If the pattern is found, it is replaced with the replace string; if not, the program will inform the user that the pattern was not found.

Features
* Search for a substring (pattern) in a given string.
* Replace the first occurrence of the pattern with a new substring (replacement string).
* Outputs the modified string if the pattern is found, or a message stating the pattern was not found.

# postfix.c
This C program converts an infix expression (standard mathematical notation) to a postfix expression (Reverse Polish Notation). It handles operators like +, -, *, /, %, ^, and $, as well as parentheses for grouping.

Overview

The program uses a stack-based algorithm to convert an infix expression to a postfix expression. The main logic relies on operator precedence and associativity rules to handle the conversion. The program prompts the user to input a valid infix expression and outputs the corresponding postfix expression.

Features
* Converts infix expressions to postfix notation.
* Supports common arithmetic operators: +, -, *, /, %, ^, $.
* Handles parentheses for proper precedence.
* Implements operator precedence using a stack.
* Assumes valid input expressions (no error handling for malformed input).
  
Code Explanation

Functions
* F(char symbol):
This function returns the precedence value of an operator. It is used to compare the precedence of operators currently in the stack with the incoming operator.

* G(char symbol):
This function returns the precedence value of the operator at the current position in the infix expression.

* infix_postfix(char infix[], char postfix[]):
The core function that performs the conversion from infix to postfix using a stack.

* main():
The entry point of the program. It prompts the user for an infix expression, calls the conversion function, and then displays both the original infix expression and the resulting postfix expression.

Operator Precedence

The precedence values used are as follows:

* +, -: Precedence 2
* *, /, %: Precedence 4
* ^, $: Precedence 5
* Parentheses (: Precedence 0
* End of expression marker #: Precedence -1

# queue.c
This repository contains a C program that implements a Circular Queue using an array. It provides operations to insert, delete, and display elements in the circular queue. This implementation makes use of modular arithmetic to efficiently manage the queue's circular nature.

Features

* Implements a Circular Queue with a fixed-size array.
* Supports the following operations:
  * Insert (enqueue) an element into the queue.
  * Delete (dequeue) an element from the queue.
  * Display the elements currently in the queue.
* Handles Queue Overflow and Queue Underflow conditions.
* The queue works in a circular manner, allowing efficient use of memory.

# stack.c
This repository contains a simple C program that demonstrates basic stack operations, including Push, Pop, Display, and Palindrome Check using a stack data structure. The stack has a fixed size, and the program includes error handling for stack overflow and underflow scenarios.

Features

* Push an Element: Allows the user to push an element onto the stack and demonstrates stack overflow if the stack is full.
* Pop an Element: Allows the user to pop an element from the stack and demonstrates stack underflow if the stack is empty.
* Palindrome Check: Checks if the stack content forms a palindrome, i.e., if the elements of the stack are the same when read forwards and backwards.
* Display Stack: Displays the current elements in the stack


# suffix.c
This is a simple C program that evaluates postfix expressions using a stack-based approach. It supports basic arithmetic operations including addition, subtraction, multiplication, division, modulo, and exponentiation. The program takes a valid postfix expression as input and outputs the result.

Features

* Evaluates postfix expressions.
* Supports the following operators:
  * Addition +
  * Subtraction -
  * Multiplication *
  * Division /
  * Modulo %
  * Exponentiation, represented as ^ or $  
* Handles integer inputs.
* Uses a stack data structure to evaluate the expression.
