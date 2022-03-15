#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    unsigned iV;
    cout << "Binary presentation of unsigned value:\n"; 
    cout << "Input value: ";
    cin >> iV;
    displayBits( iV );
    cout << "\nDemonstration of bitwize operations\n";
    unsigned iV1;
    cout << "\nDemonstration of bitwize & operation. Input value1: ";
    cin >> iV1;
    displayBits( iV & iV1 );
    cout << "\nDemonstration of bitwize shift operation. Input value1: ";
    unsigned number1 = 960;
    cout << "\nThe result of left shifting\n";
    displayBits( number1 );
    cout << "\n8bit positions using the left shift operator is:\n";
    displayBits( number1 << 8 );
    cout << "\nThe result of right shifting\n";
    displayBits( number1 );
    cout << "\n8bit positions using the right shift operator is:\n";
    displayBits( number1 >> 8 );
    return 0;
}
void displayBits( unsigned value )
{
    const int Shift = 8 * sizeof( unsigned ) - 1;
    const unsigned Mask = 1 << Shift;
    cout << setw( 10 ) << value << " = ";
    for( unsigned i = 1; i <= Shift + 1; i++ )
    {
        cout << ( value & Mask ? '1' : '0' );
        value <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    }
    cout << endl;
}
