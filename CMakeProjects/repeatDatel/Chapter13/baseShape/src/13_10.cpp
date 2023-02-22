#include "Shape.h"
#include "config.h"
#include "twoDimShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "threeDimShape.h"
#include "Circle.h"
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
	cout << "\nExample of dynamic binding.\n";
	Shape *array[ 3 ] = { &r, &t, &c };
	for (int i = 0; i < 3; i++)
	{
		array[ i ] ->print();
		cout << array[ i ] -> getName() << "'s area is: ";
		cout << array[ i ] -> getArea() << "sm2.\n";
	}
	
	return 0;
}