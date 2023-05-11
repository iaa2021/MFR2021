#pragma once
#include "Shape.h"
#include "twoDimShape.h"
class Triangle : public twoDimShape
{
public:
    Triangle( double, double, string );
    virtual double getArea();
	static void getVersion();
    virtual void print() const;
};