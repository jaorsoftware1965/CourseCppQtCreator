/*

Course C++ Qt Creator
Autor: JAOR
Class014 - General Purpose Operators

sizeof.
Determines the size in bytes of a variable or data type.
This operator we used in previous class
Its usage syntax is:

sizeof(variable|datatype)


?:
This operator is called conditional because evaluates a condition;
and depending of the result, it executes one part or another.
Its operation syntax is as follows:

Exp1 ? Exp2 : Exp3;

Exp1 is the expression that is evaluated and that must
return a boolean result; true or false.

If Exp1 returns true, then Exp2 is executed; if Exp1
returns false; then Exp3 is executed.

Example. Consider you have 2 variables; X and Y; and what do you want
display on the screen the value of that variable that is
bigger. The instruction would be as follows:

X > Y ? cout << X : cout << Y;

,
The "," Operator allows a sequence to be executed
of instructions followed one after the other.
We are using when we declare variables that are of the same type.

Example:
integer x, y, z;

There are other operators, ".","->","&" and "*"; that are used
in topics that we will see later.
*/


// Librarys
#include <iostream>

// NameSpace
using namespace std;

// Header
#include "class014.h"

Class014::Class014()
{
   // Display Course and Class
   cout << "Course C++ Qt \n";
   cout << "Class014 - General Purpose Operator's \n\n";

   // Declaring Var's
   int  x=9, y=10;
   bool bExit;


   // Testing ?:
   cout << "Evaluating sizeof \n";
   cout << "Bytes for int :" << sizeof(x) << " - " << sizeof(int);
   cout << endl;
   cout << "Bytes for bool :" << sizeof(bExit) << " - " << sizeof(bool);

   cout << endl;
   cout << endl;


   // Using conditional
   cout << "x: " << x << " y: " << y << endl;
   cout << "Testing x > y: ";
   x > y ? cout << "x is bigger y": cout << "x is not bigger y";
   cout << endl;


   //
   bExit ? cout << "true" : cout << "false";
   cout << endl;


   cout << "Testing operador ',' \n";
   x = 10, cout << "x:" << x, x= 20, cout << " x:" << x << endl;
}
