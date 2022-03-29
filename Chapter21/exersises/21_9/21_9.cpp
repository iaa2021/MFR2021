#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void displayBits( int );
void power2( int, int );

int main()
{
    int v;
    cout << "Input integer value: " << endl;
    cin >> v;
    cout << "An value's output in binary view:\n";
    displayBits( v );
    cout << "An value's output in binary view after right shift on 4 bits:\n";
    displayBits( v >> 4 );
    int number, power;
    cout << "Input number and power for expression number * 2^power\n";
    cin >> number >> power;
    power2( number, power );
    return 0;
}
void displayBits( int value )
{
    cout << "The value = " << value << endl;
    const int Shift = 8 * sizeof( int ) - 1;
    const unsigned Mask = 1 << Shift;
    for( int i = 1; i <= Shift + 1; i++ )
    {
        cout << ( value & Mask ? '1' : '0' );
        value <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    } 
    cout << endl;
}
void power2( int number, int power )
{
    cout << "\nThe number is " << number << " = ";
    displayBits( number );
    cout << "\n The number after function power2 handling is \n";
    displayBits( number << power );

}