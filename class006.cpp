/*
Course C++ Qt
Autor: JAOR
Class006 - Constants

A constant is a way of setting a fixed value in a program,
which does not it can be modified.

There are 2 ways in C++ to define constants.
- Using the #define preprocessor directive
- Using the keyword const.

USING #define.
When we use the preprocessor directive, we define a reference
to which a value is associated; which does not necessarily
have to be a literal according to some type.

When we use the reference, in the program; before compiling,
the reference is substituted with the indicated value.

Example:
#define LENGTH 10

In the previous example we define the reference Length
which we can use in any part of the program and what to do
the compiler before compiling, is to substitute in the
program where the name appears LENGTH; with the value of 10.


USING const
When we define a Constant with the keyword const, a memory space
is reserved for this data just like with a variable;
with the difference that this value cannot be modified
with the program.

To define a constant, the following syntax is followed:

const data_type constant_name = value;

As we can see, as with a variable; it is due to indicate the
type of data; then the value of the constant and finally
its value or its literal.

Example:
const int LENGTH = 10;

It's a convention write constants in upper case

*/

// Include header
#include "class006.h"

// Library
#include <iostream>

// Name Space
using namespace std;

// We define with directive
#define CHANGE_LINE endl
#define DISPLAY     cout <<


// Define with const
const int AGE = 33;

Class006::Class006()
{
    // Display Course name
    DISPLAY "Curso de C++ "        << CHANGE_LINE;
    DISPLAY "Clase 06 - Constants" << CHANGE_LINE << CHANGE_LINE;

    DISPLAY "Age :" << AGE << CHANGE_LINE << CHANGE_LINE;
}
