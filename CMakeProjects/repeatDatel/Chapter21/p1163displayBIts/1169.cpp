#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    unsigned number1 = 960;
    cout << "The result of left shifting\n";
    displayBits( number1 );
    cout << "8 bit positions using the left-shift operator is\n";
    displayBits( number1 << 8 );
    cout << "\nThe result of right shifting\n";
    displayBits( number1 );
    cout << "8 bit positions using the right-shift operator is\n";
    displayBits( number1 >> 8 );
    return 0;
}
void displayBits( unsigned value )
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned Mask = 1 << SHIFT;
    cout << setw( 10 ) << value << " = ";
    for (unsigned i = 1; i <= SHIFT + 1; i++)
    {
        cout << ( value & Mask ? "1" : "0" );
        value <<= 1; // put value left for 1
        if( i % 8 == 0 )
        cout << ' '; 
    }
    cout << endl;
}