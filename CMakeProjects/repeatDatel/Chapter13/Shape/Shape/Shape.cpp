#include "Shape.h"

Shape::Shape( double l, string n )
	: length( l >= 0? l : 0 )
{
}

void Shape::print() const
{
	cout << name << "'s length is: " << length << ", ";
}

void Shape::getVersion()
{
	cout << "Base shape's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}