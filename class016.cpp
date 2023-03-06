/*

Course C++ Qt
Autor: JAOR
Class016 - Cast


The Cast is a special way of use data types
like an operator, to perform conversions between data types.

The Syntax used to perform a Cast is the
following:

(data_type) expression;

datatype.
Is the data type to which the expression will be converted.

expression.
Is a variable or expression that returns a result or
a value which can be converted to the data_type.

Example:

int x;
x = (int) 21.0988;

*/

// Header
#include "class016.h"

// Library
#include <iostream>

// Name Space
using namespace std;

Class016::Class016()
{
   // Display Course and Class
   cout << "Course C++ Qt Creator\n";
   cout << "Class016 - Casting \n\n";

   // Variables
   int   x;
   float fPeso = 89.50;
   char  xCaracter ='\n';

   // Message
   cout << "Test CAST \n";

   // Casting automatic
   x = 21.0988;
   cout << "0) x:" << x << endl;

   // cast
   x = (int) 12.3009;
   cout << "1) x:" << x << endl;

   x= (int) 'A';
   cout << "2) x:" << x << endl;

   x= (int) fPeso;
   cout << "3) x:" << x << endl;

   x= xCaracter;
   cout << "4) x:" << x << endl;

   x= (int)true;
   cout << "5) x:" << x << endl;

   // Can not this
   //x= (int) "12.3009";
   //cout << "6) x:" << x << endl;

   fPeso = 'A';
   cout << "6) fPeso:" << fPeso << endl;
}
