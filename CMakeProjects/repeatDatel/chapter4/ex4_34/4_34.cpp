#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include "config.h"
int encription( int );
int decription( int );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR);
    cout << (PROJECT_VERSION_PATCH) << endl;
    srand( time( 0 ) );
    vector <int> v, v1, v2;
    int a;
    for( int i = 0; i < 5; i++ )
    {
        a = rand()%10000 + 1;
        if( a < 1000 )
        a += 1000;

        v.push_back( a );
    }
    ostream_iterator <int> output( cout, ", " );
    cout << "Vector contains such integers:\n";
    copy( v.begin(), v.end(), output );
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back( encription( v.at( i ) ) );
    }
    cout << "Vector contains such integers:\n";
    copy( v.begin(), v.end(), output );
    cout << endl;
    cout << "Encripted values are:\n";
    copy( v1.begin(), v1.end(), output );
    cout << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << "( " << i << " + 7 ) % 10 = " << ( i + 7 ) % 10 << endl;
    }
    cout << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << "( " << i << " - 7 ) % 10 = " << ( i - 7 ) % 10 << endl;
    }
    cout << "Primary vector contains such integers:\n";
    copy( v.begin(), v.end(), output );
    cout << "\nEncripted values are:\n";
    copy( v1.begin(), v1.end(), output );
    cout << endl;
    cout << "\nDencripted values are:\n";
    for (size_t i = 0; i < 5; i++)
    {
        v2.push_back( decription ( v1.at( i ) ) );
    }
    copy( v2.begin(), v2.end(), output );
    cout << endl;
    return 0;
}
int encription( int value )
{
    int a, b, c, d, result;
    a = value / 1000; b = ( value % 1000 ) / 100; c = ( value - ( a * 1000 ) - b * 100 ) / 10; 
    d = ( value - ( a * 1000 ) - b * 100 ) % 10;
    cout << endl << value << " consists of such integers: " << a << " " << b << " " << c << " " << d << endl;
    result = ( ( ( c + 7 ) % 10 ) * 1000 ) +  ( ( ( d + 7 ) % 10 ) * 100 ) + ( ( ( a + 7 ) % 10 ) * 10 ) + ( b + 7 ) % 10;
    cout << "Encripted variant of " << value << " is " << result << endl;
    return result;
}
int decription( int value )
{
    int a, b, c, d, result; 
    a = value / 1000; b = ( value % 1000 ) / 100; c = ( value - ( a * 1000 ) - b * 100 ) / 10; 
    d = ( value - ( a * 1000 ) - b * 100 ) % 10;
    vector <int> v = { a, b, c, d };
    for (size_t i = 0; i < v.size(); i++)
    {
        if( v.at( i ) < 7 )
        v.at( i ) += 10;

        v.at( i ) -= 7;
    }
    result = v.at( 2 ) * 1000 + v.at( 3 ) * 100 + v.at( 0 ) * 10 + v.at( 1 );
    return result;
}