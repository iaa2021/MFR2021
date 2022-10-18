#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <cmath>
using std::pow;
#include <iomanip>
using std::setprecision;
#include "config.h"
int factorial( int );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    int a, c; double b = 1;
    cout << "Input number, which factorial you'd like to know: ";
    cin >> a;
    cout << factorial( a ) << endl;
    cout << "\nInput precision, you'd like to calculate variable e with: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        b += 1 / static_cast< double >( factorial( i ) );
    }
    cout << fixed << setprecision( 2 );
    cout << "\ne = " << b << endl;
    b = 1;
    cout << "\nInput number, to learn e in power to number: "; 
    cin >> a;
    cout << "\nInput precision's number of calculation: ";
    cin >> c;
    for (int i = 1; i <= c; i++)
    {
        b += static_cast< double >( pow( a, i ) ) / static_cast< double >( factorial( i ) );
    }
    cout << fixed << setprecision( 2 );
    cout << "\nThe result is: " << b << endl;
    
    return 0;
}
int factorial( int value )
{
    int total = 1;
    for( int i = 1; i <= value; i++ )
    total *= i;

    return total;
}