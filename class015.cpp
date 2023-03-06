/*
Course C++ Qt Creator
Autor: JAOR
Class015 - Operator Precedence

The Expressions in a programming language,
are executeds from left to right.

The operators in programming, have high o
low precedence relative with others operators.
The precedence indicate, that operations must be
executed firstly.

Example:

2 + 3 * 4 = 2 + 3 =  5 * 4 = 20 // Error
2 + 3 * 4 = 3 * 4 = 12 + 2 = 14 // Ok

The operator * have a higher precedence that +;
for these reason, the multiplication must be executed first.

The precedence of the operators is shown in the
next table. The operators that are above
have higher priority or precedence than those that
they are below.

Operator        Type
Postfix         () [] -> . ++ - -
Unary           + - ! ~ ++ - - (type)* and size of
Multiplicative  * / %
addition        + -
offset          << >>
Relational      <<= >>=
Equality        == !=
Bit AND         &
Bitwise XOR     ^
Bit OR          |
And logical     &&
OR logical      ||
conditional     ?:
Assignment      = += -= *= /= %=>>= <<= &= ^= |=
Comma           ,

*/

// Header
#include "class015.h"

// Library
#include <iostream>

// Name Space
using namespace std;


Class015::Class015()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Course C++ \n";
    cout << "Class015 - Precedence Operators \n\n";

    cout <<"5 + 6  * 8 :" <<  5 + 6  * 8 << endl ;
    cout <<"(5 + 6) * 8 :" << (5 + 6) * 8 << endl ;
    cout << endl;

    cout <<"5 + 6  * -8 :" <<  5 + 6  * -8 << endl ;
    cout <<"(5 + 6) * -8 :" << (5 + 6) * -8 << endl ;
    cout << endl;

    // 6 * 8 = 48 + 5 = 53 * 2 = 106 * 2 = 212
    cout <<"5 + 6  *  8 << 2 : " <<  (5 + 6 *  8 << 2) << endl ;

    // 8 * 2 = 16 * 2 = 32 * 6 = 192 + 5 = 197
    cout <<"5 + 6  * (8 << 2) :" <<  (5 + 6 * (8 << 2)) << endl ;

    cout << endl;

}

