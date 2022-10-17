#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdarg>
using std::va_list;
#include "config.h"
int product( int, ... );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    int a, b, c, d, e;
    cout << "Input 2 arguments, which you'd like to multiply:\n";
    cin >> a >> b;
    cout << "\nProduct of entered by you 2 numbers is:\n" << product( 2, a, b ) << endl;
    cout << "Input 5 arguments, which you'd like to multiply:\n";
    cin >> a >> b >> c >> d >> e; 
    cout << "\nProduct of entered by you numbers is:\n" << product( 5, a, b, c, d, e ) << endl;
    return 0;
}
int product( int count, ... )
{
    va_list list; va_start(list, count); int total = 1;
    for( int i = 1; i <= count; i++ )
        total *= va_arg( list, int );

    va_end( list );
    return total;
}

