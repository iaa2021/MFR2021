#include "Shape.h"
#include "2Dshape.h"
#include "Rectangle.h"
#include "config.h"
int main()
{
	cout << "Project's version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
	Shape::getVersion();
	2Dshape::getVersion();
	Rectangle::getVersion();
	return 0;
}