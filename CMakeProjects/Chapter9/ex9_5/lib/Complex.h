#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Complex
{
public:
    Complex( double = 0, double = 0 );
    void adding( Complex & );
    void deduction( Complex & );
    void setComplex( double, double );
private:
    double real;
    double complex;   
};
#endif