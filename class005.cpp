/*

Course C++ Qt Creator
Autor: JAOR
Class005 - Declaring Variables and assign values

Now that we've seen the data types,
and the literals corresponding to each one
of them, we will see how to declare a variable
and how to assign values ​​using the literals.

Remember that a variable is a place where
we are going to be able to store something,
of the type of data of the variable

The Variable Names must follow the following
rules:

- The first character must be a letter or an underscore(_);
- Contain letters (without accent), numbers or underscore's (_).
- There are no restrictions on the length of the name.
- There cannot be a variable similar to a reserved word.

The syntax for declaring a variable is as follows:

type list_of_variables;

type. indicates the type of data (or class we will see this
later).

variable list. variable names to be
are going to create, each separated by ",".

Examples:

int i, j, k;
char c, ch;
float f, salary;
double d;

The Variables can be assigned a value when we declare them;
this is known as initialize variables.

To do this, place the variable followed by an "=" symbol and then
the literal or value assigned to it. Example:

int   age     = 34, sum=0;
int   total   = sum;
char  vocal   = 'A';
float weight = 82.5, height=1.82;

*/

// The header
#include "class005.h"

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

Class005::Class005()
{
   // Is recommended that variables are declared in the
   // beginning of the code
   int     age = 34, sum=0 + age - 30;
   char    vocal ='A';
   wchar_t wcUniversal='\u00BE';
   string  sUniversal="\u00BE";
   bool    bOut   = true;
   float   weight = 82.5, height = 1.82;

   cout << "Course C++ Qt \n";
   cout << "Class005 - Declaring Variables and assing values" <<endl<<endl;

   // Displaying
   cout << "Desplegando las Variables"   << endl;
   cout << "age         :"<< age         << endl;
   cout << "vocal       :"<< vocal       << endl;
   cout << "wcUniversal :"<< wcUniversal << endl;
   cout << "sUniversal  :"<< sUniversal  << endl;
   cout << "sum         :"<< sum         << endl;
   cout << "bOut        :"<< bOut        << endl;
   cout << "weight      :"<< weight      << endl;
   cout << "height      :"<< height      << endl<<endl;

   // We modify variables
   age   = 50;
   bOut  = false;
   sum   = age - 45;
   vocal = 'B';
   wcUniversal = wcUniversal - 1;
   sUniversal="\u00BD";
   weight = weight - age;
   height = height - 1;

   // Desplegando los valores de las variables
   cout << "Desplegando las Variables"   << endl;
   cout << "age         :"<< age         << endl;
   cout << "vocal       :"<< vocal       << endl;
   cout << "wcUniversal :"<< wcUniversal << endl;
   cout << "sUniversal  :"<< sUniversal  << endl;
   cout << "sum         :"<< sum         << endl;
   cout << "bOut        :"<< bOut        << endl;
   cout << "weight      :"<< weight      << endl;
   cout << "height      :"<< height      << endl<<endl;

}
