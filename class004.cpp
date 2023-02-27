/*
Course C++ Qt Creator
Autor: JAOR
Class004 - Literals

The values ​​that we can assign are known as literals.
We assign this value to variables according to the type of data.
Later we will see like declare variables and assing literals

BOOL LITERALS
There are only 2 possible values: true and false;

INTEGER LITERALS
An Integer literal can be represented in 3 ways: in
decimal, octal and hexadecimal.

The literals in octal must be preceded by a "0";
the hexadecimals of "0x". Examples:

Octal value        -> 017
Hexadecimal value  -> 0x17
Decimal value      -> 17

LITERALS IN FLOATING POINT
The literals in Floating Point, have an integer part (optional),
a "." and a decimal part. Optionally it can be
followed by a letter "e" and a number indicating the exponent.
Examples:

3.1416
3.1416e3
0.15
.10


CHARACTER LITERALS
Character literals are delimited by single quotes, (')
If it is preceded by an "L"; then it is a literal
of type wchar_t.

A literal character, can be of 3 types:
- A single character: 'x',L'x';
- An escape sequence: '\n','\t';
- A universal character: "\u02C0";

STRING LITERALS
String literals are delimited by double quotes, (")
and we have used them to display messages.
We have not yet seen a type of data that allows us to
store a string, we'll see that later. Example

"Hello World"

*/

// Include Header
#include "class004.h"

// Library
#include <iostream>

// Name Space
using namespace std;

Class004::Class004()
{
   // Message about class
   cout << "Course C++ Qt Creator \n";
   cout << "Class 04 - Literals" << endl << endl;

   // Displaying
   cout << "Displaying Literals Booleans" << endl;
   cout << "FALSE       :"<<     false    << endl;
   cout << "TRUE        :"<<      true    << endl<<endl;

   cout << "Displaying Literals Integer"<< endl;
   cout << "Decimal     :"<<        19 << endl;
   cout << "Octal       :"<<       023 << endl;
   cout << "Hexadecimal :"<<      0x13 << endl<<endl;

   cout << "Displaying Literals in Floating Point"<< endl;
   cout <<   3.1416   << endl;
   cout <<   3.1416e3 << endl;
   cout << 314.16e-2  << endl;
   cout <<   0.16     << endl;
   cout <<    .16     << endl<<endl;

   cout << "Displaying Literals Character" << endl;
   cout << "Literal Caracter  x           :" <<       'x' << endl;
   cout << "Literal Caracter  \\          :"<<        '\\' << endl;
   cout << "Literal Caracter  \'          :" <<       '\'' << endl;
   cout << "Literal Caracter BackSpace    :" <<       '\b' << "Hola" << endl;
   cout << "Literal Caracter Tab          :" <<       '\t' << "Hola" << endl;
   cout << "Literal Caracter Return       :" <<       '\r' << "Hola" << endl;
   cout << "Literal Caracter Universal    :" <<   "\u00BE" << endl;
   cout << "Literal Caracter Octal        :" <<     '\50' << endl;
   cout << "Literal Caracter Hexadecimal  :" <<    '\x50' << endl   << endl;

   cout << "Displaying String Literal"    << endl;
   cout << "Hello World"  << endl << endl;

}
