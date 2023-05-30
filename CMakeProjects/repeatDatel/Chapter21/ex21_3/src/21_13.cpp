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
vector<char> unpack4Characters( int );
int pack4Characters( vector<char> );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.12\n";
    cout << "Input 4 characters:\n";
    char c; vector<char>v, v1;
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
    v1 = unpack4Characters( a );
    cout << "\nCharacters contained in vector are next:\n";
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1.at( i ) << ' ';
    }
    cout << endl;
    cout << "Exersise 21.15\n";
    unsigned b, d;
    cout << "Input 1 unsigned integer :\n";
    cin >> b;
    displayBits( b );
    d = ~b;
    cout << "Reversed unsigned integer is:\n";
    displayBits( d );
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
vector<char> unpack4Characters( int number )
{
    vector<char>v; char c; int a = 65280 >> 8;
    cout << "\nCharacters, packed in " << number << " are next:\n";
    for (size_t i = 0; i < 4; i++)
    {
        c = number & a;
        v.push_back( static_cast<char>( c ) );
        if( i < 3 )
        {number >>= 8;}
    }
    for (size_t i = 0; i < 4; i++)
    cout << v.at( i ) << ' ';

    cout << endl;
    return v;
}