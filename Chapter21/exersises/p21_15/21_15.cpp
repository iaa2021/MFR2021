#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void displayBits( char );
void displayBits( unsigned );
void reverseBits( unsigned );
void reverseBits( char );
void unpackCharacters( unsigned );

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
}
void unpackCharacters( unsigned d )
{
    displayBits( d );
    char a, b, e, f;
    unsigned c = d & 4278190080;// 11111111 00000000 00000000 00000000 is 4278190080
    c >>= 24;
    a = static_cast< char >( c );
    cout << " 1 letter is " << a << endl;
    c = d & 16711680; // 00000000 11111111 00000000 00000000 is 16711680
    c >>= 16;
    b = static_cast< char >( c );
    cout << " 2 letter is " << b << endl;
    c = d & 65280;// 65280 = 00000000 00000000 11111111 00000000
    c >>= 8;
    e = static_cast< char >( c );
    cout << " 3 letter is " << e << endl;
    c = d & 255;// 255 = 00000000 00000000 00000000 11111111
    f = static_cast< char >( c );
    cout << " 4 letter is " << f << endl;
    cout << "In value " << d << " were packed " << a << ", " << b << ", " << e << ", " << f << " characters.\n";
}