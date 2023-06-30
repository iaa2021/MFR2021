#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1316, using key words:\n";
    bool a = true;
    bool b = false;
    int c = 2;
    int d = 3;
    cout << boolalpha;
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;
    cout << "Logical operator keywords:\n";
    cout << " a and a = " << ( a and a ) << endl;
    cout << " a or b = " << ( a or a ) << endl;
    cout << " a and b = " << ( a and b ) << endl;
    cout << " a or a = " << ( a or b ) << endl;
    cout << " not a = " << ( not a ) << endl;
    cout << " not b = " << ( not b ) << endl;
    cout << "\nBitwise operator keywords:\n";
    cout << "c bitand d = " << ( c bitand d ) << endl;
    cout << "c bit_or d = " << ( c bitor d ) << endl;
    cout << "c xor d = " << ( c xor d ) << endl;
    
    return 0;
}