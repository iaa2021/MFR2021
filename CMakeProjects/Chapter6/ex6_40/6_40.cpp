#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::pow;
#include "config.h"
int power( int, int );
int fibo( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    int base, pow;
    cout << "Input base, -1 to end input: "; 
    cin >> base;
    cout <<"Input power: ";
    cin >> pow;
    while ( base != -1 )
    {
        cout << "\nBase " << base << " in power " << pow << " = " << power( base, pow ) << endl;
        cout << "Input base, -1 to end input: ";
        cin >> base;
        if( base != -1 )
        {
            cout << "Input power: ";
            cin >> pow;
        }
    }
    cout << "\nNow processing ex 6.41.\n";
    cout << "Return fibo's power:\n";
    cin >> pow;
    for( int i = 0; i <= pow; i++ )
    cout << i << "  " << fibo( i ) << endl;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
int power( int base, int pow )
{
    if( pow == 0 )
    return 1;
    else if( pow == 1 )
    return base;
    else
    return base * power( base, pow - 1 );
}
int fibo( int n )
{
    if( n == 0 || n == 1 )
    return n;
    else
    return fibo( n - 1 ) + fibo( n - 2 );
}