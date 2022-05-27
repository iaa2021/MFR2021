#include "Derived.h"

Derived::Derived( int integer, char character, double double1 )
	: Base1( integer ), Base2( character ), real( double1 ){}
double Derived::getReal() const
{
	return real;
}

ostream& operator<< (ostream& output, const Derived& derived)
{
	output << "\nInteger: " << derived.value << "\ncharacter: " << derived.Base2::getData() << "\ndouble: " << derived.real;
	return output;
}
