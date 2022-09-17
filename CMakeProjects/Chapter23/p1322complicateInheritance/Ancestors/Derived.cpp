#include "Derived.h"
#include <iostream>
using std::endl;
Derived::Derived( int integer, char character, double double1 )
    : Base1( integer ), Base2( character ), real( double1 ){}

double Derived::getReal() const
{
    return real;
}
ostream &operator<< ( ostream &output, const Derived &derived )
{
    output << "Integer " << derived.value << "\nCharacter " << derived.letter << "\nDouble " << derived.getReal() << endl;
    return output;
}
