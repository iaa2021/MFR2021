#pragma once
#include "Sphere.h"
#include "threeDimShape.h"
class Sphere : public threeDimShape
{
public:
    Sphere( string, double, double = 0, double = 0 );
    virtual double getArea();
    virtual double getVolume();
	virtual void print() const;
	static void getVersion();
};
