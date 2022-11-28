#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int gcd( int, int );
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    int x, y;
    cout << "Input two integers to look for greater common deleter:\n";
    cin >> x >> y;
    cout << "\nThe greater common deleter of " << x << " and " << y << " is ";
    cout << gcd( x, y ) << endl;
    return 0;
}
int gcd( int x, int y )
{
    if( y == 0 )
    return x;
    else
    return gcd( y, x % y );
}