#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <cmath>
using std::pow;
using std::sqrt;
#include <iomanip>
using std::setprecision;
double distance( double, double, double , double);
int mystery( int, int );
double circleArea( double );
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    double x, x1, y, y1;
    cout << "Input coordinats: x, y, x1, y1:\n";
    cin >> x >> y >> x1 >> y1;
    cout << "\nDistance between these points is ";
    cout << fixed << setprecision( 2 ) << distance( x, y, x1, y1 ) << endl;
    int a, b;
    cout << "Completing ex 6.48. Input two integers: ";
    cin >> a >>b;
    cout << "\nFunction mistery in work." << mystery( a, b ) << endl;
    cout << "Completing ex 6.55, calculating circle's square. Input sircle's radius: ";
    cin >> a;
    cout << "\nCircle's radius is " << a << " square is " << circleArea( a ) << "sm2.\n";
    return 0; // 
}
double distance( double x, double y, double x1, double y1 )
{
    return sqrt( pow( ( x - x1 ), 2 ) + pow( ( y - y1 ), 2 ) );
}
int mystery( int a, int b )//a * b
{
    if( b == 1 )
    return a;
    else if( b > 1 )
    return a + mystery( a, b - 1 );
    else if( b < 0 )
    return -1 * a + mystery( a, b + 1 );
}
double circleArea( double rad )
{
    return 3.14 * pow( rad, 2 );
}