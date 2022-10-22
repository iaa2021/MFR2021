#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw;
#include <cmath>
using std::pow;
using std::sqrt;
#include "config.h"
int main()
{
    double pi = 4, a; 
    int c;//calculation's presision
    cout << "Input precision for calculation pi, for example 3.14, 3.141:\n";
    cin >> c;
    cout << fixed;
    cout << setw( 11 ) << "Presision" << setw( 5 ) << "pi" << endl; 
    for( int i = 1; i <= c; i++ )
    {
        a = ( ( i % 2 ) == 0 ? (( 2 * i ) + 1) : - (( 2 * i ) + 1) );
        pi +=  4 / a;
        cout <<  setw(2) << i << "   " << setw( 5 ) << setprecision( 5 ) << pi << "   ";
        if( i % 5 == 0 )
        cout << endl;
    }
    cout << endl;
    cout << "\nHandling exercise 5.20, looking for Pifagor's threes.\n";
    double z; //z is hipotenuze
    for( int x = 1; x <= 500; x++ )//x, y are legs,
    {
        for( int y = 1; y <= 500; y++)
        {
            z = sqrt( pow( x, 2 ) + pow( y, 2 ) );
            if( z - static_cast<int>( z ) == 0 )
            cout << x << "  " << y << "  " << setprecision( 0 ) << z << "; ";
        }
    }
    cout << "\nHandling exercise 5.23, printing a rhombus.\n";
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if( i < 5 && j >= 4 - i && j <= 4 + i )
            cout << '*';
            else if( i >= 5 && j >= i - 4 && j <= 8 - i + 4 )
            cout << '*';
            else
            cout << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR);
    cout << "." << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}