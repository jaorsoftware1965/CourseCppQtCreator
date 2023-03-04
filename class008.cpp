/*

Course C++ Qt
Autor: JAOR
Class008 - Relational Operators

Relational operators are those that allow us to make a comparison
between 2 operands and the result that return is a boolean value;
true or false.

Below is the table with the different
operators and example; considering that X= 10 and Y=20.

------------------------------------------------------------------
OPERATOR DESCRIPTION                        EXAMPLE
------------------------------------------------------------------
    ==   Compare are equal               (X==Y) Return false;
    !=   Compare are different           (X!=Y) Return true;
    >    Compare greater                 (X>Y)  Return false;
    <    Compare less than               (X<Y)  Return true;
    >=   Compare greater than or equal   (X>=Y) Return false;
    <=   Compare less than or equal      (X<=Y) Return true;


As in the case of the arithmetic operators, the 2 operands to
compare must be of the same type; under certain exceptions, that
we will see later.

*/

// Include Header
#include "class008.h"

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

Class008::Class008()
{
   // Display Message Course and Class
   cout << "Course C++ Qt Creator\n";
   cout << "Class008 - Relational Operators \n";

   //  Variables Integer
   int  X=10, Y=20;
   bool bResult;

   // Display Values
   cout << "X : "<< X << endl;
   cout << "Y : "<< Y << endl << endl;


   // Making Operations
   bResult = (X == Y);
   cout << "X == Y   :" << bResult << endl;

   // Realizamos la operación
   bResult = (X != Y);
   cout << "X != Y   :" << bResult << endl;

   // Realizamos la operación
   bResult = (X > Y);
   cout << "X > Y    :" << bResult << endl;

   // Realizamos la operación
   bResult = (X < Y);
   cout << "X < Y    :"<< bResult << endl;

   // Realizamos la operación
   bResult = (X >= Y);
   cout << "X >= Y   :"<< bResult << endl;

   // Realizamos la operación
   bResult = (X <= Y);
   cout << "X <= Y   :"<< bResult << endl;

   // Realizamos la operación
   bResult = (X > 'A');
   cout << "X > 'A'  :"<< bResult << endl;

   bResult = (X < 'A');
   cout << "X < 'A'  :"<< bResult << endl;

   bResult = (X > true);
   cout << "X > true :"<< bResult << endl;

   bResult = (X < true);
   cout << "X < true :"<< bResult << endl;

   bResult = (true < X);
   cout << "true < X :"<< bResult << endl;

   bResult = (true > X);
   cout << "true > X :"<< bResult << endl;

   bResult = ('B' < 'Z');
   cout << "'B' < 'Z' :"<< bResult << endl;

   bResult = ("Hello" == "Hell");
   cout << "Hello == Hell : " << bResult << endl << endl;
}
