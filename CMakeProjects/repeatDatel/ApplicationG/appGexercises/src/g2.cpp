#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
using std::setprecision;
using std::fixed;
using std::setiosflags;
#include <cstdarg>
using std::va_list;
int multiply( int, ... );
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1371, volatile number of arguments in function:\n";
    int a, b, c, d;
    cout << "Input 4 integers:\n";
    cin >> a >> b >> c >> d;
    cout << "\na * b = " << multiply( 2, a, b );
    cout << "\na * b * c = " << multiply( 3, a, b, c );
    cout << "\na * b *c * d = " << multiply( 4, a, b, c, d ) << endl;
    return 0;
}
int multiply( int count, ... )
{
    va_list list; int total = 1;
    va_start( list, count );
    for (int i = 0; i < count; i++)
    {
        total *= va_arg( list, int );
    }
    va_end( list );
    return total;
}