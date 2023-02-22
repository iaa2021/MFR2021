#include "twoDimShape.h"
twoDimShape::twoDimShape( double l, double w, string n )
    : Shape( l, n ), width( w > 0 ? w : 1 )
{}

void twoDimShape::getVersion() 
{
    cout << "2 dim shape's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}

void twoDimShape::print() const
{
    Shape::print();
    cout << " width is: " << getWidth() << endl;
}

double twoDimShape::getWidth() const
{
    return width;
}