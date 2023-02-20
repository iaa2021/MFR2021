#include "2Dshape.h"
2Dshape:2Dshape(double l, double w, string n )
	: Shape( l, n ), width( w )
{
}

void 2Dshape::print() const
{
	Shape::print();
	cout << width
}