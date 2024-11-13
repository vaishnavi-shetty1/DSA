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
