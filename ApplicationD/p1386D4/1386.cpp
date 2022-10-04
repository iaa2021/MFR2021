#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::fmin;
#include <string>
using std::string;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#define PI 3.14159
#define VOLUME(x) ( PI * ( 4 / 3 ) * ( x ) * ( x ) * ( x )  )
#define SUM( x, y ) ( x + y )
#define MINIMUM2( x, y) ( fmin( x, y ) )
#define MINIMUM3( x, y, z ) ( fmin( x, MINIMUM2( y, z ) ) )
#define PRINT( x ) ( cout << x << endl )
void printArray( int *, int );
int sumArray( int *, int );
#define PRINTARRAY( x, y ) ( printArray( x, y ) )
#define SUMARRAY( x, y ) ( sumArray( x, y ) )
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    srand( time( 0 ) );
    cout << "List of sphere's volumes with radius from 1 till 10:\n";
    for (size_t i = 1; i < 11; i++)
    {
        cout << "radius: " << i << "sm, volume: ";
        cout << VOLUME( i ) << "sm2 or " << VOLUME( i ) / 10000 << "m2" << endl;
    }
    int a, b, c; 
    cout << "\nInput two integers for summing: ";
    cin >> a >> b;
    cout << "\nSum of " << a << " and " << b << " is " << SUM( a, b ) << endl;
    cout << "\nInput two integers to find minimum of them: ";
    cin >> a >> b;
    cout << "\nMinimum of " << a << " and " << b << " is " << MINIMUM2( a, b ) << endl;
    cout << "\nInput three integers to find minimum of them: ";
    cin >> a >> b >> c;
    cout << "\nMinimum of " << a << " and " << b << " and " << c << " is " << MINIMUM3( a, b, c ) << endl;
    string text( "\nWork with makros.\n" );
    PRINT( text );
    cout << "\nInput array size: ";
    cin >> a;
    int *ptr = new int[ a ];
    for( int i = 0; i < a; i++ )
    ptr[ i ] = rand()%50 + 1;
    PRINTARRAY( ptr, a );
    cout << endl;
    cout << "Array's sum is: " << SUMARRAY( ptr, a ) << endl;
    return 0;
}
void printArray( int *ptr, int s )
{
    for( int i = 0; i < s; i++ )
    {
        cout << ptr[ i ] << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
     
}
int sumArray( int *ptr, int s )
{
    int total = 0;
    for( int i = 0; i < s; i++ )
    {
        total += ptr[ i ];
    }
     return total;
}