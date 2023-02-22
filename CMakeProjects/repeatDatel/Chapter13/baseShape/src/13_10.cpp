#include "Shape.h"
#include "config.h"
#include "twoDimShape.h"
int main()
{
	cout << "Project's version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
	Shape::getVersion();
	twoDimShape::getVersion();
	return 0;
}