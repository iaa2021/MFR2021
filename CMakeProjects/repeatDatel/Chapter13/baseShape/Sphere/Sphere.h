#pragma once
#include "Sphere.h"
#include "threeDimShape.h"
class Sphere : public threeDimShape
{
public:
    Sphere( string, double, double = 0, double = 0 );
    ~Sphere();
};
