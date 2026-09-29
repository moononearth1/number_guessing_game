#Number Guessing Game

A simple C++ console-based number guessing game where the player tries to guess a number chosen by the program.

##How it works
- The program picks a number from an array 
- The number program picks differs based on system time
- The player gets 5 attempts to guess the number
- For every wrong guess the program hints the player whether the number is bigger or 
   smaller than their guess
- Guesses outside the range are rejected
- If the player runs out of guesses the program reveals the correct number

##Concepts used
- C++ functions
- Arrays
- Pointers
- Structures
- Conditional statements
- User input/output
- goto and program flow
- <ctime> library

##Current limitation
The target number is selected using the current seconds value from the system clock. Therefore, there are only 60 possible array indices.
This project is primarily intended as a beginner C++ project for practicing programming fundamentals.


##Future improvements
- Add player guess tracker
- Add replay option
- Replace goto with proper loops

##Requirements
- C++ compiler
- Any IDE or code editor that supports C++

##Project purpose
This project was created to practice fundamental C++ concepts by building a small, playable console application.


