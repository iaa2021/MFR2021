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
    unsigned inputValue;
    cout << "Input unsigned value: ";
    cin >> inputValue;
    displayBits( inputValue );
    cout << "\nExample on page 1166.\n";
    unsigned number1, number2, mask, setBits;
    cout << "\nBitwize & demonstration:\n";
    number1 = 2179876355;
    mask = 1;
    cout << "The result of combining is the following\n";
    displayBits( number1); displayBits( mask );
    displayBits( number1 & mask );
    cout << "\nBitwize | demonstration:\n";
    number1 = 15; setBits = 241;
    cout << "The result of combining is the following\n";
    displayBits( number1 ); displayBits( setBits );
    displayBits( number1 | setBits );
    cout << "\nBitwize ^ demonstration:\n";
    number1 = 139;
    number2 = 199;
    cout << "The result of combining is the following\n";
    displayBits( number1); displayBits( number2 );
    displayBits( number1 ^ number2 );
    cout << "\nBitwize ~ demonstration:\n";
    number1 = 21845;
    cout << "\nThe one's complement of\n";
    displayBits( number1 );
    cout << " is\n";
    displayBits( ~number1 );
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
