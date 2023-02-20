#include "Shape.h"

class 2Dshape : public Shape
{
public:
	Shape( double, double, string );
	virtual double getArea() = 0;
	virtual double getArea() = 0;
	virtual void print() const;
	static void getVersion();

private:
	double width;
};

