#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void displayBits( char );
void displayBits( unsigned );
void packCharacters( char, char );
void unpackCharacters( unsigned );
void unpackCharacters1( unsigned );
int main()
{
    char a, b;
    cout << "Input a, b: " << endl;
    cin >> a >> b;
    displayBits( a );
    displayBits ( b );
    packCharacters( a, b );
    unsigned c;
    cout << "\nInput c\n";
    cin >> c;
    unpackCharacters( c );
    cout << "\nDemonstration of unpackCharacters1, using & option with 255 & 65280:\n";
    unpackCharacters1( c );
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
void packCharacters( char a, char b )
{
    unsigned c = static_cast<unsigned>( a );
    cout << "a = " << c << endl;
    displayBits( c );
    c <<= 8;
    cout << "a <<= 8 : " <<  c << endl;
    displayBits( c );
    c |= static_cast<unsigned>( b );
    cout << "a + b = : " <<  c << endl;
    displayBits( c );
}
void unpackCharacters( unsigned d )
{
    displayBits( d );
    char a, b;
    unsigned c = d >> 8;
    cout << "d >>= 8 " << endl;
    displayBits( c );
    a = static_cast< char >( c );
    cout << "\na = " << a << endl;
    c = d << 24;
    cout << " c = d <<= 24 " << c << endl;
    displayBits( c );
    c >>= 24;
    displayBits( c );
    b = static_cast< char >( c );
    cout << "\nb = " << b << endl;
    cout << "So, in unsigned value " << d << " were packed " << a << " and " << b << " characters.\n";
}
void unpackCharacters1( unsigned d )
{
    displayBits( d );
    char a, b;
    unsigned c = d & 65280;// 65280 = 11111111 00000000
    c >>= 8;
    displayBits( c );
    a = static_cast< char >( c );
    cout << "\na = " << a << endl;
    c = d & 255;// 255 = 00000000 11111111
    displayBits( c );
    b = static_cast< char >( c );
    cout << "\nb = " << b << endl;
    cout << "So, in unsigned value " << d << " were packed " << a << " and " << b << " characters.\n";
}
  