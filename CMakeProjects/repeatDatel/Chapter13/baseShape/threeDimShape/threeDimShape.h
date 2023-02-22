#pragma once
#include "Shape.h"
#include "config.h"

class threeDimShape : public Shape
{
public:
    threeDimShape( double, double, double, string );
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
	virtual void print() const;
	static void getVersion();
    virtual double getHigh() const;
    virtual double getWidth() const;
private:
    double high;
    double width;
};

