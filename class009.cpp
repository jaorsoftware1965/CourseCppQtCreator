/*

Course C++ Qt creator
Autor: JAOR
Class009 - Logical Operators

The Logical Operators are those that
allow evaluation of more than one condition.

Its operands must be boolean, that is;
only true and false are valid.


This is the table with the 3 logical operators
from C++
-------------------------------------------------- ----------------
OPERATOR    NAME    VALUE RETURNED
-------------------------------------------------- ----------------
   &&       AND     Only returns true, when both are true
                    Returns false, with one being false
   ||       OR      Only returns false, when both are false
                    Returns true, with one being true
   !        NOT     Converts from true to false, and from false to true


TABLE OF AND
Op1  | Op2  | && Res
-------------------
true | true | true
true | false| false
false| true | false
false| false| false


TABLE OF OR
Op1 | Op2   | ||
-------------------
true | true | true
true | false| true
false| true | true
false| false| false


TABLE OF NOT
Op1  | !
-------------------
true | false
false| true


*/

// Header
#include "class009.h"

// Library
#include <iostream>

// Name Space
using namespace std;

Class009::Class009()
{
   // Display Course and Class
   cout << "Course C++ Qt Creator \n";
   cout << "Class009 - Logical Operators \n\n";

   // Declaración de variables enteras
   cout << "TABLE AND"<<endl;
   cout << "true  && true  :" << (true  && true)  << endl;
   cout << "true  && false :" << (true  && false) << endl;
   cout << "false && true  :" << (false && true)  << endl;
   cout << "false && false :" << (false && false) << endl <<endl;

   cout << "TABLE OR"<<endl;
   cout << "true  || true  :" << (true  || true)  << endl;
   cout << "true  || false :" << (true  || false) << endl;
   cout << "false || true  :" << (false || true)  << endl;
   cout << "false || false :" << (false || false) << endl <<endl;

   cout << "TABLE NOT"<<endl;
   cout << "!true          :" << !true  << endl;
   cout << "!false         :" << !false << endl <<endl;

   cout << "Special Cases"<<endl;
   cout << "5 && 5         :" << (5 && 5)   << endl;
   cout << "-5 && -5       :" << (-5 && -5)  << endl;
   cout << "0 && 1         :" << (0 && 1)    << endl;
   cout << "0 || 1         :" << (0 || 1)    << endl <<endl;

   int total = 150;
   //                         true         false
   cout << "Result:" << ( (total > 99) && (total < 200))   << endl <<endl;
}
