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
void Complex::adding( Complex *ptr )
{
    cout << fixed << setprecision( 2 );
    cout << "\nThe result of folowing expression:\n";
    cout << "( " << real << " + " << complex << " )" << " + ";
    cout << "( " << ptr -> real << " + " << ptr -> complex << " ) = " << endl;
    cout << " = ( " << real + ptr -> real << " + " << complex + ptr -> complex << " )";
    cout << endl;  
}
void Complex::deduction( Complex *ptr )
{
    cout << fixed << setprecision( 2 );
    cout << "\nThe result of folowing expression:\n";
    cout << "( " << real << " - " << complex << " )" << " + ";
    cout << "( " << ptr -> real << " - " << ptr -> complex << " ) = " << endl;
    if( complex - ptr -> complex < 0 )
    cout << " = ( " << real - ptr -> real << "  " << complex - ptr -> complex << " )";
    else
    cout << " = ( " << real - ptr -> real << " + " << complex - ptr -> complex << " )";
    cout << endl;  
}
void Complex::setComplex()
{
    cout << "\nInput real part, than complex:\n";
    cin >> real >> complex;
}