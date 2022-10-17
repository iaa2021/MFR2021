#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    cout << "unsignedSHIFT = " << SHIFT << "   " << ( SHIFT + 1 ) / 8 << " bytes, " << 8 * sizeof( unsigned ) << " bits." << endl;
    const int charSHIFT = 8 * sizeof( char ) - 1;
    cout << "charSHIFT = " << charSHIFT << "   " << ( charSHIFT + 1 ) / 8 << " bytes, " << 8 * sizeof( char ) << " bits." << endl;
    const int doubleSHIFT = 8 * sizeof( double ) - 1;
    cout << "doubleSHIFT = " << doubleSHIFT << "   " << ( SHIFT + 1 ) / 8 << " bytes. " << 8 * sizeof( double ) << " bits." << endl;
    cout << " MASK = 1 << SHIFT is " << ( 1 << SHIFT ) << endl;
    unsigned a;
    cout << "Enter unsigned integer:\n";
    cin >> a;
    displayBits( a );
    return 0;
}
void displayBits( unsigned c )
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned MASK = 1 << SHIFT;
    cout << setw( 10 ) << c << " = ";
    for( int i = 1; i <= SHIFT + 1; i++ )
    {
        cout << ( c & MASK ? '1' : '0' );
        c <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    }
    cout << endl;
}