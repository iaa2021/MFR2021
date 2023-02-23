#include "Sphere.h"

Sphere::Sphere( string n, double l, double w, double h )
    : threeDimShape( l, w, h, n )
{}

void Sphere::getVersion()
{
    cout << "Sphere's library version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}

double Sphere::getArea()
{
    return getLength() * getLength() * 3.14 * 4;
}

double Sphere::getVolume()
{
    return getLength() * getLength() * getLength() * 3.14 * ( 4 / 3 );
}

void Sphere::print() const
{
    cout << "Sphere's radius is: " << Shape::getLength() << endl; 
}