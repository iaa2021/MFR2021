#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <cstdlib> // prototype exit function
using std::exit;
#include "Array.h"
#include "config.h"
Array::Array( int arraySize )
{
    size = ( arraySize > 0? arraySize: 10 );
    ptr = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        ptr[ i ] = 0;
    }
}
Array::Array( const Array &arrayToCopy )
    : size( arrayToCopy.size )
{
    for (int i = 0; i < size; i++)
    {
        ptr[ i ] = arrayToCopy.ptr[ i ];
    }
}
Array::~Array()
{
    delete [] ptr;
}
const Array & Array::operator=( const Array &right )
{
    if( &right != this )// to avoid self assignment
    {
        if( size != right.size )
        {
            delete ptr;
            size = right.size;
            ptr = new int[ size ];
        }
        for (int i = 0; i < size; i++)
        {
            ptr[ i ] = right.ptr[ i ];
        }
    }
    return *this;//allows to write a = b = c;
}
bool Array::operator==( const Array &right) const
{
    if( size != right.size )
    return false;
    for (int i = 0; i < size; i++)
    {
        if( ptr[ i ] != right.ptr[ i ] )
        return false;
    }
    return true;
}
int &Array::operator[]( int subscript )//for nonconst objects, returns left value, i.e. ref
{
    if( subscript < 0 || subscript >= size )
    {
        cerr << "\nSubscript " << subscript << " is out of range.\n";
        exit( 1 );
    }
    return ptr[ subscript ];
}
int Array::operator[]( int subscript ) const//for const objects, returns right value, i.e. copy
{
    if( subscript < 0 || subscript >= size )
    {
        cerr << "\nSubscript " << subscript << " is out of range.\n";
        exit( 1 );
    }
    return ptr[ subscript ];
}
ostream &operator<<( ostream &output, const Array &a )
{
    for (int i = 0; i < a.size; i++)
    {
        output << setw( 12 ) << a.ptr[ i ];
        if( i % 4 == 0 )
        output << endl;
    }
    output << endl;
    return output;
}
istream &operator>>( istream &input, Array &a )
{
    for (int i = 0; i < a.size; i++)
    {
        input >> a.ptr[ i ];
    }
    return input;
}
void Array::getVersion()
{
    cout << "\nLibrary's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}