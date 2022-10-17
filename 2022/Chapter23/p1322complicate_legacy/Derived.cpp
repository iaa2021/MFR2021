#include "Derived.h"

Derived::Derived( int integer, char character, double double1 )
    : Base1( integer ), Base2( character ), real( double1 ){}

double Derived::getReal()const
{
    return real;
}
ostream &operator<< ( ostream &output, const Derived &derived )
{
    output << "Integer: " << derived.value << "\nCharacter: " << derived.letter;
    output << "\nReal number: " << derived.real;
    return output;
}
