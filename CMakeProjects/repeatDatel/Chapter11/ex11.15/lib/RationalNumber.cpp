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
    if( a > 1 )
    {
        nominator /= a;
        denominator /= a;
    }
}
void RationalNumber::print() const
{
    cout << nominator << " / " << denominator;
}
RationalNumber RationalNumber::operator+( const RationalNumber &rn)
{
    RationalNumber rn1; int d, n;
    d = this ->denominator * rn.denominator;
    n = this ->nominator * rn.denominator + rn.nominator * this ->denominator;
    rn1.setRN( n, d );
    return rn1;
}
RationalNumber RationalNumber::operator-( const RationalNumber &rn)
{
    RationalNumber rn1; int d, n;
    d = this ->denominator * rn.denominator;
    n = this ->nominator * rn.denominator - rn.nominator * this ->denominator;
    rn1.setRN( n, d );
    return rn1;
}
RationalNumber RationalNumber::operator*( const RationalNumber &rn)
{
    RationalNumber rn1; int d, n;
    d = this ->denominator * rn.denominator;
    n = this ->nominator * rn.nominator;
    rn1.setRN( n, d );
    return rn1;
}
RationalNumber RationalNumber::operator/( const RationalNumber &rn)
{
    RationalNumber rn1; int d, n;
    d = this ->denominator * rn.nominator;
    n = this ->nominator * rn.denominator;
    rn1.setRN( n, d );
    return rn1;
}
void RationalNumber::compareRN( const RationalNumber &rn )
{
    if( this ->nominator * rn.denominator > rn.nominator * this -> denominator )
    {
        this ->print(); cout << " > "; rn.print(); cout << endl;
    }
    else if( this ->nominator * rn.denominator < rn.nominator * this -> denominator )
    {
        this ->print(); cout << " < "; rn.print(); cout << endl;
    }
    else
    {
        this ->print(); cout << " = "; rn.print(); cout << endl;
    }
}