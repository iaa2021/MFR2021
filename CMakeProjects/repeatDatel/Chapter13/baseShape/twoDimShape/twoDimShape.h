#pragma once
#include "Shape.h"
#include "config.h"

class twoDimShape : public Shape
{
public:
    twoDimShape( double, double, string );
    virtual double getArea() = 0;
	virtual double getVolume() = 0;
	virtual void print() const;
	static void getVersion();
    virtual double getWidth() const;
private:
    double width;
};

