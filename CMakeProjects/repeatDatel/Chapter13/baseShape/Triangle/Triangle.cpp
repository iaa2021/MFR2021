#include "Triangle.h"
Triangle::Triangle( double l, double w, string n )
    : twoDimShape( l, w, n )
{}

void Triangle::getVersion()
{
    cout << "Triangle's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}

double Triangle::getArea()
{
    return getLength() * getWidth() / 2;
}
void Triangle::print() const
{
    twoDimShape::print();
}