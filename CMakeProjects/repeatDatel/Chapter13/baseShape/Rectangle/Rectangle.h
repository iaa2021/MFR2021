#pragma once
#include "Shape.h"
#include "twoDimShape.h"
class Rectangle : public twoDimShape
{
public:
    Rectangle( double, double, string );
    virtual double getArea();
	static void getVersion();
    virtual void print() const;
};
