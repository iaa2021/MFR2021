#pragma once
#include "Shape.h"
#include "twoDimShape.h"
class Circle : public twoDimShape
{
public:
    Circle( string, double, double = 0 );
    virtual double getArea();
	static void getVersion();
    virtual void print() const;
};
