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
int main()
{
    double x, x1, y, y1;
    cout << "Input coordinats: x, y, x1, y1:\n";
    cin >> x >> y >> x1 >> y1;
    cout << "\nDistance between these points is ";
    cout << fixed << setprecision( 2 ) << distance( x, y, x1, y1 ) << endl;
    return 0; // 
}
double distance( double x, double y, double x1, double y1 )
{
    return sqrt( pow( ( x - x1 ), 2 ) + pow( ( y - y1 ), 2 ) );
}