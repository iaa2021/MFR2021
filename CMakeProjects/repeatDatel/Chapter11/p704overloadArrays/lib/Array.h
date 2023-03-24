#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using std::ostream;
using std::istream;
#include <cstdlib> // prototype exit function
using std::exit;
using std::rand;
using std::srand;
#include <ctime>
using std::time;
class Array
{
friend ostream &operator<<( ostream &, const Array & );
friend istream &operator>>( istream &, Array & );
public:
    Array( int = 10 );
    Array( const Array & );//copy constructor
    ~Array();
    int getSize() const
    {
        return size;
    }
    const Array &operator=( const Array & );//assignment operation
    bool operator==( const Array & ) const;
    bool operator!=( const Array &right ) const
    {
        return !( *this == right );//invokes Array::operator==
    }
    int &operator[]( int );//for nonconst objects, returns left value
    int operator[]( int ) const;//for const objects, returns right value  
    void getVersion();
private:
    int size;
    int *ptr;
};
#endif