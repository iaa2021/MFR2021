#include "Rational.h"
#include "config.h"
Rational::Rational(int n, int d)
    : numerator( n ), denominator( d )
{}

void Rational::setRational( int n, int d )
{
    numerator = n; denominator = d;
}

void Rational::multiplication( Rational &ref )
{
    cout << numerator << "/" << denominator << " * " << ref.numerator;
    cout << "/" << ref.denominator << " = ";
    cout << numerator * ref.numerator << '/' << denominator * ref.denominator << endl;
    cout << fixed << setprecision( 2 );
    cout << "In double view this number is: ";
    cout << static_cast<double>( numerator * ref.numerator ) / static_cast<double>( denominator * ref.denominator ) << "\n\n";
}
void Rational::division( Rational &ref )
{
    cout << numerator << "/" << denominator << " : " << ref.numerator;
    cout << "/" << ref.denominator << " = ";
    cout << numerator * ref.denominator << '/' << denominator * ref.numerator << endl;
    cout << fixed << setprecision( 2 );
    cout << "In double view this number is: ";
    cout << static_cast<double>( numerator * ref.denominator ) / static_cast<double>( denominator * ref.numerator ) << "\n\n";
}
void Rational::adding( Rational &ref )
{
    cout << numerator << "/" << denominator << " + " << ref.numerator;
    cout << "/" << ref.denominator << " = ";
    cout << numerator * ref.denominator +  denominator * ref.numerator;
    cout << "/" << denominator * ref.denominator << endl;
    cout << fixed << setprecision( 2 );
    cout << "In double view this number is: ";
    cout << static_cast<double>( numerator * ref.denominator +  denominator * ref.numerator ) / static_cast<double>( denominator * ref.denominator ) << "\n\n";
}
void Rational::deduction( Rational &ref )
{
    cout << numerator << "/" << denominator << " - " << ref.numerator;
    cout << "/" << ref.denominator << " = ";
    cout << numerator * ref.denominator -  denominator * ref.numerator;
    cout << "/" << denominator * ref.denominator << endl;
    cout << fixed << setprecision( 2 );
    cout << "In double view this number is: ";
    cout << static_cast<double>( numerator * ref.denominator -  denominator * ref.numerator ) / static_cast<double>( denominator * ref.denominator ) << "\n\n";
}
void Rational::printVersion() const
{
    cout << "Library version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
int Rational::gcd( int x, int y )
{
    if( x == 0 )
    return y;
    else
    return gcd( y, x % y );
}