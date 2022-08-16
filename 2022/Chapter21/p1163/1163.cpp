#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    unsigned value;
    cout << "Input value:\n";
    cin >> value;
    displayBits(value);
    return 0;
}
void displayBits( unsigned value )
{
    const int Shift = 8 * sizeof( unsigned ) - 1;
    const unsigned Mask = 1 << Shift;
    cout << setw( 10 ) << value << " = ";
    for (unsigned i = 1; i <= Shift + 1; i++)
    {
        cout << ( value & Mask ? '1': '0' );
        value <<= 1;
        if( i % 8 == 0 )
            cout << ' ';
    }
    cout << endl;
}