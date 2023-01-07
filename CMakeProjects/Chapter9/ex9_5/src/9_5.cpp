#include "Complex.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
int main()
{
    Complex number1, number2;
    number1.setComplex();
    number2.setComplex();
    number1.adding( number2 );
    number1.deduction( number2 );
    return 0;
}
