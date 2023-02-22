#include "Shape.h"
#include "config.h"
#include "twoDimShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "threeDimShape.h"
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
	double l, w;
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
	return 0;
}