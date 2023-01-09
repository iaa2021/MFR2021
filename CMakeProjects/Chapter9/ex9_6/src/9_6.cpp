#include "Rational.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Rational r1, r2;
    r1.printVersion();
    int a, b;
    cout << "\nInput numerator than denominator of first rational number:\n";
    cin >> a >> b;
    r1.setRational( a, b );
    cout << "than numerator than denominator of second rational number:\n";
    cin >> a >> b;
    r2.setRational( a, b );
    r1.adding( r2 ); r1.deduction( r2 ); 
    r1.multiplication( r2 ); r1.division( r2 );
    return 0;
}