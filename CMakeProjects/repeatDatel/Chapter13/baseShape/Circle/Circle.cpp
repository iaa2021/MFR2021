#include "Circle.h"
Circle::Circle( string n, double l, double w )
    : twoDimShape( l, w, n )
{}

void Circle::getVersion()
{
    cout << "Circle's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}

double Circle::getArea()
{
    return getLength() * getLength() * 3.14;
}
void Circle::print() const
{
    cout << "Circle's radius is: " << Shape::getLength() << endl;
}