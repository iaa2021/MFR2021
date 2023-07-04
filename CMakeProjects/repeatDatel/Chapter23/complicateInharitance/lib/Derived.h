#pragma once
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;
#include "base1.h"
#include "base2.h"
#include "config.h"
class Derived : public base1, public base2
{
    friend ostream &operator<<( ostream &, Derived & );
    public:
    Derived( int, char, double );
    double getReal() const;
    static void printVersion()
    {
    cout << "Library's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    }
    private:
    double real;
};
