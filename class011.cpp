/*

Course C++ Qt Creator
Autor: JAOR

Class011 - One's Complement Operator

There are 2 methods to represent values
negatives in a Computer System.

One of them is 1's complement, which
use this symbol: ~.

This operator obtain the representation value in negative.

Example:
int x = 60;
x = ~x;

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Header Class
#include "class011.h"

Class011::Class011()
{
   // Display Message
   cout << "Course C++ Qt Creator\n";
   cout << "Class 011 - One's Complement Operator \n\n";

   // Declaramos las variables
   int x = 60;

   // 60 = 00111100
   //    = 00111101
   //    = 11000010

   //  0 = 00000000
   //    = 00000001
   //    = 11111110

   // Declaración de variables enteras
   x= ~x;
   cout << "  1's Complement x :"  << x << endl;

   x= ~x;
   cout << " 1's Complement ~x :" << x << endl;

   x=0;
   x=~x;
   cout << " 1's Complement  x :"  << x << endl;

   x=~x;
   cout << " 1's Complement ~x :" << x << endl << endl;
}
