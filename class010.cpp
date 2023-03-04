/*

Course C++ Qt Creator
Autor: JAOR
Class010 - Bit Operators

The Bit Operators are used
to perform operations between numeric values
bitwise; which is very similar to
logical operators that we saw in the previous class.

What does it mean at the bitwise?

It means that the value is converted to System
Binary Numeric, which only handles 0's and
1's; that is, and with these bits the operations
are performed.

Bit-level operators are & (and), or (|)
and the ^ (exclusive Or). below is shown
a table that shows how it behaves
each of these operators

Op1|Op2| & | | | ^
-------------------
 1 | 1 | 1 | 1 | 0
 1 | 0 | 0 | 1 | 1
 0 | 1 | 0 | 1 | 1
 0 | 0 | 0 | 0 | 0

 Ejemplo:

 int x=12, y=39;

    x    |   y      |    &=4   |  |=47    |   ^=43
00001100 | 00100111 | 00000100 | 00101111 | 00101011

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Header
#include "class010.h"

Class010::Class010()
{    
    // Display Message
    cout << "Course C++ Qt Creator \n";
    cout << "Clas010 - Bit Operators \n\n";

    // We declare variables
    int x=12,y=39;


    // Display Examples
    cout << "TABLE BIT Operators"<<endl;
    cout << " Op1 Op2   &  |  ^"<<endl;
    cout << "  1   1    " << (1 & 1) << "  " << (1 | 1) << "  " << (1 ^ 1) << endl;
    cout << "  1   0    " << (1 & 0) << "  " << (1 | 0) << "  " << (1 ^ 0) << endl;
    cout << "  0   1    " << (0 & 1) << "  " << (0 | 1) << "  " << (0 ^ 1) << endl;
    cout << "  0   0    " << (0 & 0) << "  " << (0 | 0) << "  " << (0 ^ 0) << endl << endl;

    cout << "Evaluando Valores de x = "<< x << " y = " << y  << endl;
    cout << " x & y :"<< (x & y) << endl;
    cout << " x | y :"<< (x | y) << endl;
    cout << " x ^ y :"<< (x ^ y) << endl;
}
