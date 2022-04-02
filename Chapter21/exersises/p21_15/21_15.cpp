#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void displayBits( char );
void displayBits( unsigned );
void reverseBits( unsigned );
void reverseBits( char );

int main()
{
    char c;
    unsigned n;
    cout << "Input an integer value :\n ";
    cin >> n;
    reverseBits( n );
    cout << "Input a character :\n ";
    cin >> c;
    reverseBits( c );
    return 0;
}
void displayBits( char value )
{
    cout << "The value = " << value << endl;
    const int Shift = 8 * sizeof( char ) - 1;
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
void displayBits( unsigned value )
{
    cout << "The value = " << value << endl;
    const int Shift = 8 * sizeof( unsigned ) - 1;
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
void reverseBits( unsigned value)
{
    cout << "The value before reverse: ";
    displayBits( value );
    cout << "The value after reverse: ";
    displayBits( ~value );
}
void reverseBits( char value)
{
    unsigned a = static_cast<unsigned>( value );
    cout << "The value before reverse: ";
    displayBits( value );
    cout << "The value after reverse: ";
    displayBits( ~a);
    char value2 = static_cast<char>( ~a );
    cout << "\nThe character after reverse is " << value2 << endl;
}