#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
template <class T> 
void displayBits( T );
void unpackCharacters( short );
short packCharacters( char, char );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.12\n";
    char c, d; short e;
    cout << "Input 2 characters: "; 
    cin >> c >> d;
    e = packCharacters( c, d );
    cout << "\nThese characters in unpacked view :\n";
    unpackCharacters( e );
    return 0;
}
template <class T> 
void displayBits( T value )
{
    const int SHIFT = 8 * sizeof( T ) - 1;
    const unsigned Mask = 1 << SHIFT;
    cout << setw( 10 ) << value << " = ";
    for (unsigned i = 1; i <= 1 + SHIFT; i++)
    {
        cout << ( value & Mask ? '1' : '0' );
        value <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    }
    cout << endl;
}
short packCharacters( char a, char b )
{
    cout << "In bit view characters are:\n";
    cout << a << " is:\n";
    displayBits( a );
    cout << b << " is:\n";
    displayBits( b );
    short c = 0;
    c |= a;
    c <<= 8;
    c |= b;
    cout << "Short integer united characters " << a << " and " << b << " is " << c << endl;
    displayBits( c );
    return c;
}
void unpackCharacters( short e )
{
    short a = ( 65280 & e ) >> 8;
    cout << "\nFirst unpacked character is: " << static_cast<char>( a ) << endl;
    a = ( 65280 >> 8 ) & e;
    cout << "\nSecond unpacked character is: " << static_cast<char>( a ) << endl;
}