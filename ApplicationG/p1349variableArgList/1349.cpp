#include <iostream>
using std::cout;
using std::endl;
using std::ios;
using std::cin;
#include <iomanip>
using std::fixed;
using std::setw;
using std::setiosflags;
using std::setprecision;
#include <cstdarg>
using std::va_list;
double average( int, ... ); 
int main()
{
    double d1 = 37.5;
    double d2 = 22.5;
    double d3 = 1.7;
    double d4 = 10.2;
    cout << fixed << setprecision( 1 );
    cout << "double d1 = " << d1 << ", double d2 = " << d2 << ", double d3 = " << d3;
    cout << ", double d4 = " << d4 << endl;
    cout << "The average d1 and d2 is: " << average( 2, d1, d2 ) << endl;
    cout << "The average d1, d2 and d3 is: " << average( 3, d1, d2, d3 ) << endl;
    cout << "The average d1, d2, d3 and d4 is: " << average( 4, d1, d2, d3, d4 ) << endl;
    cin.get();
    return 0;
}
double average( int count, ... )
{
    double total = 0;
    va_list list;
    va_start( list, count );
    for (int i = 1; i <= count; i++)
    {
        total += va_arg( list, double );
    }
    total/=count;
    va_end( list );
    return total;
}