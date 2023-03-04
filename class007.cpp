/*
Course C++ Qt
Autor: JAOR
Class007 - Aritmethic Operators

An operator is a symbol that tells the compiler to
execute a certain operation.

This operation is usually performed between 2 operands
but there are operators that only need one operand.

The operands must correspond to the operator.
If is an arithmetic operator, the operands must be values
numeric.

BINARY ARITHMETIC OPERATORS.
The arithmetic operators are those that correspond to
known mathematical operations: +,-,*,/ and one
additional called remainder, %.
The remainder is an operator that returns, just as
says its name, the remainder of a division operation.

Examples:
int value1=29, value2=90;
value1 = value1 + value2;
value1 = value2 - value1;

UNARY ARIMETIC OPERATORS.
There are 2 arithmetic operators that are unary, because
they only need one operand; and they are the ++ and the --.
These operators increment(++) and decrement(--) by 1, the
operand that is indicated.

Example:
int counter=5;
counter++;


These operators can be used in prefix, or in postfix.
In the previous example, the operator is used in postfix.

In the next example is used in prefix.
++counter;

When the operator is used in postfix; first the instruction
is executed. When the instruction end; then the operator
is executed.

When is used in prefix; the increment is executed before
that the variable is used in the instruction. And the instruction
is executed after.

*/

// Include Header
#include "class007.h"

// Librarys
#include <iostream>

// Name Spaces
using namespace std;

Class007::Class007()
{
   // Display the message class
   cout << "Course C++ Qt \n";
   cout << "Class007 - Aritmethic Operators \n";

   // Declare Variables
   int   result = 0, oper1 = 19, oper2 = 10;
   float total  = 45.70;

   cout << "oper 1:" << oper1 << endl;
   cout << "oper 2:" << oper2 << endl;
   cout << "Total    :" << total << endl << endl;

   // Making Addition
   result = oper1 + oper2;

   // Displaying result
   cout << "result oper1 + oper2: " << result << endl;

   // Substraction
   result = oper1 - oper2;

   // Displaying result
   cout << "result oper1 - oper2: " << result << endl;

   // Making multiplication
   result = oper1 * oper2;

   // Displaying result
   cout << "result oper1 * oper2: " << result << endl;


   // Making División
   result = oper1 / oper2;

   // Displaying Result
   cout << "result oper1 / oper2: " << result << endl;

   // Getting Remainder
   result = oper1 % oper2;

   // Displaying result
   cout << "result oper1 % oper2: " << result << endl;

   // Using Float Variable
   total = total + oper1 + oper2;
   cout << "total + oper1 + oper2: " << total << endl;

   // Set 10 to oper 1
   oper1 = 10;
   cout << "oper1++   : " << oper1++ << endl;
   cout << "oper1     : " << oper1   << endl;

   // Set 10 to oper 1
   oper1 = 10;
   cout << "++oper1   : " << ++oper1 << endl;
   cout << "oper1     : " << oper1   << endl;

}
