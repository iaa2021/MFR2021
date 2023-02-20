#include "2Dshape.h"
#include <string>
using std::string;
#include "config.h"
class Rectangle : public 2Dshape
{
public:
	Rectangle( double, double, string );
	virtual double getArea() const;
	virtual void print() const;
	static void getVersion();
};