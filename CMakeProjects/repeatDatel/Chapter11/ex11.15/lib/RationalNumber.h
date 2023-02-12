#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
class RationalNumber
{
public:
    RationalNumber(int = 1, int = 1);
    int gcd( int, int );
    void setRN( int, int );
    void getVersion() const;
    void print();
    RationalNumber operator+( const RationalNumber &);
    RationalNumber operator-( const RationalNumber &);
    RationalNumber operator*( const RationalNumber &);
private:
    int nominator, denominator;
};


