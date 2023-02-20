#include "Rectangle.h"

Rectangle::Rectangle( double l, double w, string n )
	: 2Dshape( l, w, n )
{}
double Rectangle::getArea() const
{
	return 2Dshape::getwidth() * Shape::getLength;
}
void Rectangle::print() const
{
	cout << "\nRectangle's ";
	2Dshape::print();
}
static void getVersion()
{
	cout << "Rectangle's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}