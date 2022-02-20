#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
void displayBits( unsigned );
int main()
{
    unsigned int v;
    cout << "Input integer:\n";
    cin >> v;
    displayBits( v );
    cout << endl;
    displayBits(~v);
    cout << endl;
    return 0;
}
void displayBits( unsigned v )
{
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned MASK = 1 << SHIFT;
    cout << "\nvalue " << v << " = ";
    for( int i = 1; i <= SHIFT + 1; i++ )
    {
        cout << ( v & MASK? '1' : '0' );
        v <<= 1;//value = value << 1;
        if( i % 8 == 0 )
        cout << ' ';
    } 
}