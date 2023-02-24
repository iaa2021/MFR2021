#include "Shape.h"
#include "config.h"
#include "twoDimShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "threeDimShape.h"
#include "Circle.h"
#include "Sphere.h"
int main()
{
	cout << fixed << setprecision( 2 );
	cout << "Project's version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
	Shape::getVersion();
	twoDimShape::getVersion();
	Rectangle::getVersion();
	Triangle::getVersion();
	threeDimShape::getVersion();
	Circle::getVersion();
	Sphere::getVersion();
	double l, w;
	cout << "Example of static binding.\n";
	cout << "Input rectangle's length and width in format XX.XX XX.XX: ";
	cin >> l >> w;
	Rectangle r( l, w, "rectangle" );
	r.print();
	cout << r.getName() << "'s area is: " << r.getArea() << "sm2.\n";
	cout << "Input triangle's high and width in format XX.XX XX.XX: ";
	cin >> l >> w;
	Triangle t( l, w, "triangle" );
	t.print();
	cout << t.getName() << "'s area is: " << t.getArea() << "sm2.\n";
	cout << "Input circle's radius in format XX.XX: ";
	cin >> l;
	Circle c( "circle", l );
	c.print(); 
	cout << c.getName() << "'s area is: " << c.getArea() << "sm2.\n";
	cout << "Input sphere's radius in format XX.XX: ";
	cin >> l;
	Sphere sp( "sphere", l );
	sp.print(); 
	cout << sp.getName() << "'s area is: " << sp.getArea() << "sm2, ";
	cout << "volume is: " << sp.getVolume() << "sm3.\n";
	cout << "\nExample of dynamic binding.\n";
	Shape *array[ 4 ] = { &r, &t, &c, &sp };
	threeDimShape *derPtr = 0;
	for (int i = 0; i < 4; i++)
	{
		array[ i ] ->print();
		cout << array[ i ] -> getName() << "'s area is: ";
		cout << array[ i ] -> getArea() << "sm2.\n";
		derPtr = dynamic_cast <threeDimShape *>( array[ i] );
		if( derPtr != 0 )
		{
			derPtr = static_cast<threeDimShape *>( array[ i ] );
			cout << derPtr ->getName() << "'s volume is: " << derPtr ->getVolume() << endl;
		}
	}
	return 0;
}