#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <vector>
using std::vector;
template <class T> 
void displayBits( T );
void unpack4Characters( int );
int pack4Characters( vector<char> );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.12\n";
    cout << "Input 4 characters:\n";
    char c; vector<char>v;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> c;
        v.push_back( c );
    }
    cout << "\nBitwize view of these characters is:\n";
    for (size_t i = 0; i < 4; i++)
    {
        cout << v.at( i ) << " = ";
        displayBits( v.at( i ) );
    }
    int a = pack4Characters( v );
    cout << "\nInteger, contains 4 characters is: " << a << endl;
    displayBits( a );
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
int pack4Characters( vector<char>v )
{
    int a = 0;
    for (size_t i = 0; i < 4; i++)
    {
        a |= v.at( i );
        if( i < 3 )
        a <<= 8;
    }
    return a;
}