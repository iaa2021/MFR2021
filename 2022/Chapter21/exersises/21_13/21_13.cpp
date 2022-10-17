#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void displayBits( char );
void displayBits( unsigned );
void packCharacters( char, char, char, char );
void unpackCharacters( unsigned );
void unpackCharacters1( unsigned );
int main()
{
    char a, b, c, d;
    cout << "Input a, b, c, d: " << endl;
    cin >> a >> b >> c >> d;
    displayBits( a );
    displayBits ( b );
    displayBits( c );
    displayBits( d );
    packCharacters( a, b, c, d );
    unsigned e;
    cout << "\nInput e\n";
    cin >> e;
    unpackCharacters( e );
    cout << "\n11111111 00000000 00000000 00000000 is 4278190080\n";
    cout << "\n00000000 11111111 00000000 00000000 is 16711680\n";
    cout << "\n00000000 00000000 11111111 00000000 is 65280\n";
    cout << "\n00000000 00000000 00000000 11111111 is 255\n";
    cout << "\nDemonstration of unpackCharacters1, using & option with 255 & 65280:\n";
    unpackCharacters1( e );
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
void packCharacters( char a, char b, char c, char d )
{
    unsigned c1 = static_cast<unsigned>( a );
    cout << "a = " << c1 << endl;
    displayBits( c1 );
    c1 <<= 8;
    cout << "a <<= 8 : " <<  c << endl;
    displayBits( c1 );
    c1 |= static_cast<unsigned>( b );
    cout << "a + b = : " <<  c1 << endl;
    displayBits( c1 );
    c1 <<= 8;
    c1 |= static_cast<unsigned>( c );
    cout << "a + b + c = : " <<  c << endl;
    displayBits( c1 );
    c1 <<= 8;
    c1 |= static_cast<unsigned>( d );
    cout << "a + b + c + d = : " <<  c << endl;
    displayBits( c1 );
}
void unpackCharacters( unsigned d )
{
    displayBits( d );
    char a, b, e, f;
    unsigned c = d >> 24;// 1 letter
    a = static_cast< char >( c );
    cout << " 1 letter is " << a << endl;
    c = d << 8; c >>= 24;
    b = static_cast< char >( c );
    cout << " 2 letter is " << b << endl;
    c = d << 16; c >>= 24;
    e = static_cast< char >( c );
    cout << " 3 letter is " << e << endl;
    c = d << 24; c >>= 24;
    f = static_cast< char >( c );
    cout << " 4 letter is " << f << endl;
    cout << "In value " << d << " were packed " << a << ", " << b << ", " << e << ", " << f << " characters.\n";
}
void unpackCharacters1( unsigned d )
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
  