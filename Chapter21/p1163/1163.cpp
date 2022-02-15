#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    unsigned a;
    cout << "Enter unsigned integer:\n";
    cin >> a;
    displayBits( a );
    return 0;
}
void displayBits( unsigned c )
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned MASK = 1 << SHIFT;
    cout << setw( 10 ) << c << " = ";
    for( int i = 1; i <= SHIFT + 1; i++ )
    {
        cout << ( c & MASK ? '1' : '0' );
        c <<= 1;
        if( i % 8 == 0 )
        cout << ' ';
    }
    cout << endl;
}