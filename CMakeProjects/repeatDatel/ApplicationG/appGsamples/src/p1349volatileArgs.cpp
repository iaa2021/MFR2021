#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;
#include <cstdarg>
using std::va_list;
#include "config.h"
double average( int, ... );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of average function with volatile argument's number.\n";
    double d1 = 37.54, d2 = 22.57, d3 = 1.73, d4 = 10.29;
    cout << fixed << setprecision( 2 );
    cout << "d1 = " << d1 << ", d2 = " << d2 << ", d3 = " << d3 << ", d4 = " << d4;
    cout << "\nAverage of d1 and d2 is: " << average( 2, d1, d2 ) << endl;
    cout << "\nAverage of d1, d2, d3 is: " << average( 3, d1, d2, d3 ) << endl;
    cout << "\nAverage of d1, d2, d3, d4 is: " << average( 4, d1, d2, d3, d4 ) << endl;
    return 0;
}
double average( int count, ... )
{
    va_list list;
    double total = 0;
    va_start( list, count );
    for (int i = 0; i < count; i++)
    {
        total += va_arg( list, double );
    }
    va_end( list );
    return total / count;
}