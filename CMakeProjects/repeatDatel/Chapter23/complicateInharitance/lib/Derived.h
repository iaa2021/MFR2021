#pragma once
#include <iostream>
using std::ostream;
#include "base1.h"
#include "base2.h"
#include "config.h"
class Derived : public base1, public base2
{
    friend ostream &operator<<( ostream &, Derived & );
    public:
    Derived( int, char, double );
    double getReal() const;
    void printVersion() const;
    private:
    double real;
};
