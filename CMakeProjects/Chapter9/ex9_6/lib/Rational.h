#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
class Rational
{
private:
    int numerator;
    int denominator;
    int gcd( int, int );//greater common deleter
public:
    Rational( int = 0, int = 0 );
    void adding( Rational & );
    void deduction( Rational & );
    void multiplication( Rational & );
    void division( Rational & );
    void setRational( int, int );
    void printVersion() const;
    
};


