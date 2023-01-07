#include "Complex.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
Complex::Complex( double r, double c )
    : real( r ), complex( c )
{}
void Complex::adding( Complex &ref )
{
    cout << fixed << setprecision( 2 );
    cout << "\nThe result of folowing expression:\n";
    cout << "( " << real << " + " << complex << "i ) + ";
    cout << "( " << ref.real << " + " << ref.complex << "i ) = " << endl;
    cout << " = " << real + ref.real << " + " << complex + ref.complex << "i;\n";  
}
void Complex::deduction( Complex &ref )
{
    cout << fixed << setprecision( 2 );
    cout << "\nThe result of folowing expression:\n";
    cout << "( " << real << " + " << complex << "i )" << " - ";
    cout << "( " << ref.real << " + " << ref.complex << "i ) = " << endl;
    if( complex - ref.complex < 0 )
    cout << " = ( " << real - ref.real << "  " << complex - ref.complex << "i );";
    else
    cout << " = ( " << real - ref.real << " + " << complex - ref.complex << "i );";
    cout << endl;  
}
void Complex::setComplex( double a, double b )
{
    real = a; complex = b;
}