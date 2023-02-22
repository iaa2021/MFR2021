#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <string>
using std::string;
#include "config.h"
#include <iomanip>
using std::setprecision;
class Shape
{
public:
	Shape( double, string );
	virtual double getArea() = 0;
	virtual void print() const;
	static void getVersion();
	virtual double getLength() const;
	virtual string getName() const;
private:
	double length;
	string name;
};

