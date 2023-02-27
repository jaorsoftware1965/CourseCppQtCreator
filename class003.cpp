// Course of Cpp
// Class003
// Constant to get Ranges Datatypes

/*

C++ give us information about Datatypes range
using constants

CHAR_BIT	Bits in Char
SCHAR_MIN	Min Value in signed char
SCHAR_MAX	Max Value in signed char
UCHAR_MAX	Max Value in unsigned char
CHAR_MIN	Min Value in char
CHAR_MAX	Max Value in char
MB_LEN_MAX	Max Value in char multibyte
SHRT_MIN	Min Value in short int
SHRT_MAX	Max Value in short int
USHRT_MAX	Max Value in unsigned short int
INT_MIN	    Min Value in int
INT_MAX	    Max Value in int
UINT_MAX	Max Value in unsigned int
LONG_MIN	Min Value in long int
LONG_MAX	Max Value in long int
ULONG_MAX	Max Value in unsigned long int
LLONG_MIN	Min Value in long long int
LLONG_MAX	Max Value in long long int
ULLONG_MAX	Max Value in unsigned long long int


*/

// Header include
#include "class003.h"

// Library to limit constant
#include <climits>

// Library
#include <iostream>

// namespace
using namespace std;


Class003::Class003()
{
    // Display Class Message
    cout << "Curse C++ Qt \n";
    cout << "Class003 - Range Data Types Constant"<<endl<<endl;

    cout << "CHAR_BIT   : " <<CHAR_BIT << endl;
    cout << "CHAR_MIN   : " <<CHAR_MIN << endl;
    cout << "CHAR_MAX   : " <<CHAR_MAX << endl;
    cout << "SHRT_MIN   : " <<SHRT_MIN << endl;
    cout << "SHRT_MAX   : " <<SHRT_MAX << endl;
    cout << "USHRT_MAX  : " <<USHRT_MAX << endl;
    cout << "INT_MIN    : " <<INT_MIN << endl;
    cout << "INT_MAX    : " <<INT_MAX << endl;
    cout << "UINT_MAX   : " <<UINT_MAX << endl;
    cout << "LONG_MIN   : " <<LONG_MIN << endl;
    cout << "LONG_MAX   : " <<LONG_MAX << endl;
    cout << "ULONG_MAX  : " <<ULONG_MAX << endl;
    cout << "LLONG_MIN  : " <<LLONG_MIN << endl;
    cout << "LLONG_MAX  : " <<LLONG_MAX << endl;
    cout << "ULLONG_MAX : " <<ULLONG_MAX << endl << endl;
}
