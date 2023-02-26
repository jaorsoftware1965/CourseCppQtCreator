// Course of Cpp
// Class002
// Variables and Datatypes

/*
A variable is a memory space used to store information.

The information that is stored in a variable can be of
different types.

These are the Data types that C++ handles

bool.
boolean values; true,false.

char, wchart_t.
For characters; char for ascii using 1 Byte and wchar_t
to handle UNICODE characters with 2-4 bytes.

short, int & long.
For integers numbers.

float,double & long double.
For floating point numbers. Decimals numbers.

The Data Types can be modified using the
type modifiers; which are the same as C:

-signed     .negative & positive values
-unsigned   .only positive values
-short      .short values
-long       .long values


---------------------------------------------------------------------
DataType            Bytes           Range
---------------------------------------------------------------------
char 	            1 byte 	        -127 to 127 or 0 to 255
unsigned char 	    1 byte 	        0 to 255
signed char 	    1 byte 	        -127 to 127
int 	            4 bytes 	    -2147483648 to 2147483647
unsigned int 	    4 bytes 	    0 to 4294967295
signed int 	        4 bytes 	    -2147483648 to 2147483647
short int 	        2 bytes 	    -32768 to 32767
unsigned short int 	2 bytes    	    0 to 65,535
signed short int 	2 bytes 	    -32768 to 32767
long int 	        4 bytes 	    -2,147,483,647 to 2,147,483,647
signed long int 	4 bytes 	    same as long int
unsigned long int 	4 bytes 	    0 to 4,294,967,295
float 	            4 bytes 	    +/- 3.4e +/- 38 (~7 digits)
double 	            8 bytes 	    +/- 1.7e +/- 308 (~15 digits)
long double 	    8 bytes 	    +/- 1.7e +/- 308 (~15 digits)
wchar_t 	        2 or 4 bytes 	1 wide character

This values can change, depending of compiler and operating system

*/

// Include Header
#include "class002.h"

// Library
#include <iostream>

// namespace
using namespace std;

// Constructor
Class002::Class002()
{
    cout << "Course Cpp" << endl;
    cout << "Class 0002" << endl;
    cout << "Variables and DataTypes" << endl << endl;

    cout << "Size in Bytes of char      : "  << sizeof(char)     << endl;
    cout << "Size in Bytes of int       : "  << sizeof(int)      << endl;
    cout << "Size in Bytes of short int : "  << sizeof(short int)<< endl;
    cout << "Size in Bytes of long int  : "  << sizeof(long int) << endl;
    cout << "Size in Bytes of float     : "  << sizeof(float)    << endl;
    cout << "Size in Bytes of double    : "  << sizeof(double)   << endl;
    cout << "Size in Bytes of wchar_t   : "  << sizeof(wchar_t)  << endl << endl;
}
