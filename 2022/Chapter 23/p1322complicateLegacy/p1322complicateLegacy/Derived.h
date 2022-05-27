#ifndef DERIVED_H
#define DERIVED_H
#include <iostream>
using std::ostream;
#include "Base1.h"
#include "Base2.h"
class Derived : public Base1, public Base2
{
	friend ostream& operator<< (ostream&, const Derived&);
public:
	Derived(int, char, double);
	double getReal() const;
private:
	double real;
};


#endif // !DERIVED_H
