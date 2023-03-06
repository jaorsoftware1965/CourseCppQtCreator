/*

Course C++ Qt Creator
Autor: JAOR
Class 012 - Bit Shift Operators

There are other 2 bit operators
These operator shift their bits to the left (<<)
or to the right(>>) depending on the number of bits
that is indicated to move.

These operators are binary; need 2 operands.
The first operand is the number to apply the shift;
and the second operand indicate how many bits will be
shift.

Example:
int x = 10;

x = x << 2; // shift left the number 10 to 2 bits

x =      00001010 = 10 =  8 + 2
x << 2 = 00101000 = 40 = 32 + 8

x = 60;

x      = 00111100 = 60 = 32 + 16 + 8 + 4
x >> 3 = 00000111 =  7 =  4 +  2 + 1 = 7
         00001010

If we look closely, the displacement
to the left is really a multiplication by
2 of the value, the times the shift bits
indicate. In the case of shifting to the right
it is a division.

*/

// Librarys
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// header
#include "class012.h"

Class012::Class012()
{
   // Displaying Course and class
   cout << "Course C++ Qt \n";
   cout << "Class 011 - Bit Shift OPerators \n\n";

   // Declaramos las variables
   int x = 10;
   cout << " x      : " << x << endl;

   // shift left 2 bits (10 * 2 = 20 * 2 = 40)
   x= x << 2;

   cout << " x << 2 : "  << x << endl;

   // Change x
   x = 60;
   cout << " x      : " << x << endl;

   // shift right 3 bits (60/2 =30/2=15/2=7)
   x = x >> 3;
   cout << " x >> 3 : "  << x << endl;
}
