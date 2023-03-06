/*+

Course C++ Qt Creator
Autor: JAOR
Class013 - Assignment Operators

Assignment Operators are those that assigning a value,
and execute a operation.

Below is the table of operators.

-------------------------------------------------- -----------------------------------------
Operator| Description               | Example
-------------------------------------------------- -----------------------------------------
    +=  | Add to Assign             | x+=10; same as: X = X + 10;
    -=  | Subtraction when assigning| X-= 10; same as: X = X - 10;
    *=  | Multiplication on assign  | x*=10; same as: X = X * 10;
    /=  | Division when assigning   | X/=10; same as: X = X / 10;
    %=  | Residue on allocate       | X%= 10; same as: X = X % 10;
    <<= | Shift left on assign      | X<<=10; same as: X = X << 10;
    >>= | Rightshiftadds to assign  | X >>= 10; same as: X = X >> 10;
    &=  | Y bit to assign           | X &= 10; same as: X = X & 10;
    |=  | O bit when assigning      | X |= 10; equal to: X = X | 10;
    ^=  | XOr of bits when assigning| X^= 10; same as: X = X^10;

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;
// header
#include "class013.h"

Class013::Class013()
{
      // Display  Course and Class
      cout << "Course C++ \n";
      cout << "Class013 - Assignment Operators \n\n";

      // Declare X
      int X=12;

      // Message
      cout << " Example " << endl;

      cout << " X :" << X << endl << endl;
      cout << " X +=  10: " << (X += 10) << endl;
      X=12;
      cout << " X -=  10: " << (X -= 10) << endl;
      X=12;
      cout << " X *=  10: " << (X *= 10) << endl;
      X=12;
      cout << " X /=  10: " << (X /= 10) << endl;
      X=12;
      cout << " X %=  10: " << (X %= 10) << endl;
      X=12;
      cout << " X <<=  2: " << (X <<= 2) << endl;
      X=12;
      cout << " X >>=  2: " << (X >>= 2) << endl;
      X=12;
      cout << " X &=   2: " << (X &= 2) << endl;
      X=12;
      cout << " X |=   2: " << (X |= 2) << endl;
      X=12;
      cout << " X ^=   2: " << (X ^= 2) << endl;
}
