#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cctype>
using std::toupper;
using std::ispunct;
#include <cstdlib>
using std::isalpha;
using std::isdigit;
using std::strtol;
using std::strtod;
using std::atoi;
#include <cstring>
using std::strrchr;
using std::strstr;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    char c; int x, y, z; double d, e, f;
    char *ptr; char s1[ 100 ], s2[ 100 ];
    cout << "Input c letter in lower case:\n";
    cin >> c;
    c = toupper( c );
    cout << "In upper case c letter is: " << c << endl;
    cout << c << ( isdigit( 'c' ) ? " is digit.\n " : " is not digit.\n" );
    char *s3 = "1234567 Long value c letter";
    long j = strtol( s3, &ptr, 0 );
    cout << "Long digit is " << j << ", the reminder of this string is: " << ptr;
    cout << endl;
    cout << "Letter " << c << ( strrchr( s3, c ) != 0 ? " was found in " : " was not found in\n" );
    cout << s3 << endl;
    char *s4 = "98754.25 double value.";
    d = strtod( s4, &ptr );
    cout << "The string \"" << s4 << "\" converted into double value is " << d << endl;
    cout << "The reminder is \"" << ptr << "\"\n";
    cout << "Variable c = " << c << ( isalpha( c ) ? " is letter.\n" : " is not letter.\n");
    ptr = strstr( s1, s2 );
    cout << "Variable c = " << c << ( isprint( c ) ? " is print symbol.\n" : " is not print symbol.\n" );
    char *s5 = "-21";
    cout << "String " << s5 << " converted into integer is ";
    cout << atoi( s5 ) << endl;
    return 0;
}