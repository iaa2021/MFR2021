#include "Rectangle.h"
Rectangle::Rectangle( double l, double w, string n )
    : twoDimShape( l, w, n )
{}

void Rectangle::getVersion()
{
    cout << "Rectangle's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}

double Rectangle::getArea()
{
    return getLength() * getWidth();
}
void Rectangle::print() const
{
    twoDimShape::print();
}