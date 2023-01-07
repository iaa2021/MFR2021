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
    Complex number1; Complex number2;
    double a, b;
    cout << "Input real part of number1, than complex part:\n";
    cin >> a >> b;
    number1.setComplex( a, b );
    cout << "Input real part of number2, than complex part:\n";
    cin >> a >> b;
    number2.setComplex( a, b );
    number1.adding( number2 );
    number1.deduction( number2 );
    return 0;
}
