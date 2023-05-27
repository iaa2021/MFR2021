#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
template <class T> 
void displayBits( T );
int power2( int, int );
short packCharacters( char, char );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.9\n";
    unsigned a;
    cout << "Input a: ";
    cin >> a;
    displayBits( a );
    cout << "\nAfter right shift for 4 a = " << ( a >> 4 ) << endl;
    displayBits( a >> 4 );
    cout << "\nAfter left shift for 4 a = " << ( a << 4 ) << endl;
    displayBits( a << 4 );
    cout << "Exersise 21.10, number * ( 2 ^ pow ) \n";
    int a1, b;
    cout << "Input number and pow: "; 
    cin >> a1 >> b;
    cout << power2( a1, b ) << endl;
    cout << "Exersise 21.10, pack characters.\n";
    char c, d; short e;
    cout << "Input 2 characters: "; 
    cin >> c >> d;
    e = packCharacters( c, d );
    return 0;
}
//output integer's bits without sign 
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
//returns number in pow, using left shift
int power2( int number, int pow )
{
    for (int i = 0; i < pow; i++)
    {
        number <<= 1;
    }
    return number;
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