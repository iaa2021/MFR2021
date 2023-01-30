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