#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void displayBits( char );
void displayBits( unsigned );
void packCharacters( char, char );
int main()
{
    char a, b;
    cout << "Input a, b: " << endl;
    cin >> a >> b;
    displayBits( a );
    displayBits ( b );
    packCharacters( a, b );
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
  