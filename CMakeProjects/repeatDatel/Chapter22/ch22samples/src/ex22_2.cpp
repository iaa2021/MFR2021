#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include <bitset> 
using std::bitset;
#include <cmath>
using std::sqrt;
#include "config.h"
int gcd( int, int );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 22.1, prime deleters.\n";
    ostream_iterator<int> it( cout, ", " );
    int a, b; 
    vector<int> dels;//contains prime deleters
    cout << "\nInput 2 numbers: ";
    cin >> a >> b;
    cout << "\n a % b = " << a % b << endl;
    cout << "gcd() works:\n";
    cout << gcd( a, b );
    cout << endl;
    cout << "\nInput number for futher decomposing on prime deleters:\n";
    cin >> a;
    b = a;
    const int c = 1024;
    bitset< c > sieve;
    sieve.flip(); sieve.reset( 0 ); sieve.reset( 1 );
    int finalBit = sqrt( static_cast<double>( c ) ) + 1;
    for (int i = 2; i < finalBit; i++)
    {
        if( sieve.test( i ) )
        {
            for (int j = i * 2; j < c; j += i )// reset multiplys with i
            { sieve.reset( j ); }
        }
    }
    for( int i = 2; i < sqrt( static_cast<double>( a ) ) + 1; i++ )
    {
        if( a % i == 0 && sieve.test( i ) )
        { 
            while( a % i == 0 )
            {
                dels.push_back( i );
                a /= i;
            }
        }
    }
    if( a != 1 && sieve.test( a ) )
    dels.push_back( a );
    cout << "\nCommon deleters of " << b << " are next: ";
    copy( dels.begin(), dels.end(), it );
    cout << endl;
    return 0;
}
int gcd( int a, int b )
{
    if( b == 0 )
    return a;
    else
    {cout << "\na = " << a << " b = " << b << endl;
    return gcd( b, a % b );}
}