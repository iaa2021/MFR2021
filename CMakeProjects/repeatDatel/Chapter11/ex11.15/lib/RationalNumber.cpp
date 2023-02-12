#include "RationalNumber.h"
#include "config.h"
RationalNumber::RationalNumber( int n, int d )
    : nominator( n ), denominator( d > 0 ? d : 1 )
{
    int a = gcd( nominator, denominator );
    if( a > 1 )
    {
        nominator /= a;
        denominator /= a;
    }
}
int RationalNumber::gcd( int a, int b )
{
    if( b == 0 )
    return a;
    else
    return ( b, a%b );
    int min = ( a < b ? a : b );
    int d = 1;
    for (int i = 1; i <= min; i++)
    {
        if( a % i == 0 && b % i == 0 )
        d = i;
    }
    return d;
}
void RationalNumber::getVersion() const
{
    cout << "\nLib version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
void RationalNumber::setRN( int n, int d )
{
    nominator = n;
    denominator = ( d > 0 ? d : 1 ); 
    int a = gcd( nominator, denominator );
    cout << "GCD is: " << a << endl;
    if( a > 1 )
    {
        nominator /= a;
        denominator /= a;
    }
}
void RationalNumber::print()
{
    cout << nominator << " / " << denominator << endl;
}