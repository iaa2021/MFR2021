#include "Shape.h"

Shape::Shape( double l, string n )
	: length( l > 0? l : 1 ), name( n )
{
}

void Shape::print() const
{
	cout << name << "'s length is: " << getLength() << ", ";
}

void Shape::getVersion()
{
	cout << "Base shape's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
double Shape::getLength() const
{
	return length;
}
string Shape::getName() const
{
	return name;
}