#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    unsigned value, mask = 1;
    cout << "Input value: ";
    cin >> value;
    cout << "\nDemonstration of bitwise &:\n";
    displayBits(value);
    displayBits(mask);
    displayBits( value & mask );
    return 0;
}
void displayBits( unsigned value )
{
    const int Shift = 8 * sizeof(unsigned) - 1;
    const unsigned mask = 1 << Shift;
    cout << setw(10) << value << " = ";
    for (unsigned i = 0; i <= Shift + 1; i++)
    {
        cout << ( value & mask ? '1' : '0' );
        value <<= 1;
        if ( i % 8 == 0 )
            cout << ' '; 
    }
    cout << endl;
}