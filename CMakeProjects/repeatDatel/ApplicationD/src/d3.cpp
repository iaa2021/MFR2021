#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
using std::setprecision;
using std::fixed;
#define SPHERE_VOLUME( x )( ( 4/3 ) * 3.14159 * x * x * x )
#define SUM( x, y )( x + y )
#define MINIMUM2( x, y )( minimum( x, y ) )
#define MINIMUM3( x, y, z ) ( MINIMUM2( MINIMUM2( x, y ), z ) )
int minimum( int, int );
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nExersise G4, sphere volume :\n";
    cout << fixed << setprecision( 2 );
    cout << "Input sphere's radius: ";
    double x; cin >> x;
    cout << "\nSphere's radius is: " << x << "sm, and it's volume is: ";
    cout << SPHERE_VOLUME( x ) << "sm3.\n";
    cout << "\nExersise G5, sum macros :\n";
    int a, b, c;
    cout << "Input x, y: "; cin >> a >> b;
    cout << '\n' << a << " + " << b << " = " << SUM( a, b ) << endl;
    cout << "\nExersise G6, minimum2 macros :\n";
    cout << "Input 2 integers: "; cin >> a >> b;
    cout << "\nMin of " << a << " and " << b << " is: " << MINIMUM2( a, b ) << endl;
    cout << "\nExersise G7, minimum3 macros :\n";
    cout << "Input 3 integers: "; cin >> a >> b >>c;
    cout << "\nMin of " << a << " & " << b << " & " << " & " << c << " is ";
    cout << MINIMUM3( a, b, c ) << endl;
    return 0;
}
int minimum( int x, int y )
{
    if( x < y )
    return x;
    else
    return y;
}