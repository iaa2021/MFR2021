#include <iostream>
using std::cout;
using std::endl;
using std::ios;
#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;
using std::fixed;
#include <cstdarg>
using std::va_list;
#include "config.h"
double average( int, ... );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    double d1 = 3.25;
    double d2 = 4.73;
    double d3 = 7.28;
    double d4 = 8.21;
    cout << fixed << setprecision( 2 );
    cout << "double1 = " << d1 << "\ndouble2 = " << d2;
    cout  << "\ndouble3 = " << d3 << "\ndouble4 = " << d4 << endl;
    cout << "The sum of double1 and double2 = " << average( 2, d1, d2 ) << endl;
    cout << "The sum of double1 and double2 and double3 = " << average( 3, d1, d2, d3 ) << endl;
    cout << "The sum of double1 and double2 and double3 and double4 = " << average( 4, d1, d2, d3, d4 ) << endl;
    return 0;
}
double average( int count, ... )
{
    double total = 0;
    va_list list;//keeping info for va_start
    va_start( list, count );
    for (int i = 0; i < count; i++)
        total += va_arg( list, double );
    
    va_end( list );
    return total;
}