#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );

int main()
{
    unsigned number1;
    unsigned number2;
    unsigned mask;
    unsigned setBits;
    //demonstration of &
    number1 = 2179876355;
    mask = 1;
    cout << "\nThe result of combining is the folowing\n";
    displayBits( number1 );
    displayBits( mask );
    cout << "Using the bitwize AND operator & is\n ";
    displayBits( number1 & mask );
    number1 = 15;
    setBits = 241;
    cout << "\nThe result of combining is the folowing\n";
    displayBits( number1 );
    displayBits( setBits );
    cout << "Using the bitwize inclusive OR operator | is\n ";
    displayBits( number1 | setBits );
    number1 = 139;
    number2 = 199;
    cout << "\nThe result of combining is the folowing\n";
    displayBits( number1 );
    displayBits( number2 );
    cout << "Using the bitwize exclusive OR operator ^ is\n ";
    displayBits( number1 ^ number2 );
    number1 = 21845;
    cout << "\nThe one's complement is\n";
    displayBits( number1 );
    cout << " is ";
    displayBits( ~number1 );
    return 0;
}
void displayBits( unsigned value )
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned MASK = 1 << SHIFT;
    cout << setw( 10 ) << value << " = ";
    for( unsigned i = 1; i <= SHIFT + 1; i++ )
    {
        cout << ( value & MASK ? '1' : '0' );
        value <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    }
    cout << endl;
}