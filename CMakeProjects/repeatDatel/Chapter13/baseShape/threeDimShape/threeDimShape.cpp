#include "threeDimShape.h"
threeDimShape::threeDimShape( double l, double w, double h, string n )
    : Shape( l, n ), width( w > 0 ? w : 1 ), high( h > 0 ? h : 1)
{}
void threeDimShape::getVersion() 
{
    cout << "3 dim shape's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
void threeDimShape::print() const
{
    Shape::print();
    cout << " width is: " << getWidth() << ", high is: " << getHigh() << endl;
}
double threeDimShape::getWidth() const
{
    return width;
}
double threeDimShape::getHigh() const
{
    return high;
}