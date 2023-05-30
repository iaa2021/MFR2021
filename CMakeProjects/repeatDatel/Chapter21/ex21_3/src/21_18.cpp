#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
#include <iomanip>
using std::setw;
#include <cctype>
using std::tolower;
using std::toupper;
template <class T> 
void displayBits( T );
bool multiply( int );
bool mystery( unsigned );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.18\n";
    int y;
    cout << "Input integer among 1 to 320000:\n";
    cin >> y;
    cout << "\nMask is:\n";
    for ( int i = 0, mask = 1; i < 10; i++, mask <<= 1 )
    {
        cout << mask << ", ";
    }
    cout << endl;
    if( multiply( y ) )
    cout << y << " is multiply X.\n";
    else
    cout << y << " is not multiply X.\n";
    cout << "Exersise 21.18\n";
    unsigned x;
    cout << "\nEnter an integer:\n";
    cin >> x;
    cout << boolalpha << "The result is: " << mystery( x ) << endl;
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
bool multiply( int number )
{
    bool mult = true;
    for (int i = 0, mask = 1; i < 10; i++, mask <<= 1 )
    {
        if( ( number & mask ) != 0 )
        { mult = false; }
        break;
    }
    return mult;
}
bool mystery( unsigned bits )
{
    unsigned i;
    int SHIFT = sizeof( unsigned ) * 8 - 1;
    const unsigned mask = 1 << SHIFT;
    unsigned total = 0;
    for ( i = 1; i <= 32; i++, bits <<= 1 )
        if( (bits & mask) == mask )
        ++total;

    return !(total % 2);
}