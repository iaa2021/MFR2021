#include "Derived.h"

Derived::Derived( int integer, char character, double double1 )
: base1( integer ), base2( character ), real( double1 ) {}

double Derived::getReal() const
{
    return real;
}
void Derived::printVersion() const

ostream &operator<<( ostream &output, Derived &derived )
{
    output << "\nInteger = " << derived.value << ", character = ";
    output << derived.letter << ", double = " << derived.real << '\n';
    return output;
}