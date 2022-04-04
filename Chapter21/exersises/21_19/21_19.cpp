#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

bool mystery( unsigned );

int main()
{
    // this function definits is integer completely divided by 3
    unsigned x;
    cout << "Enter an integer:\n";
    cin >> x;
    cout << boolalpha << "\nThe result is: " << mystery( x ) << endl;
    return 0;
}

bool mystery( unsigned bits )
{
    const unsigned Shift = 8 * sizeof( unsigned ) - 1;
    const unsigned Mask = 1 << Shift; 
    unsigned total = 0;
    for( int i = 1; i <= 32; i++, bits <<= 1 )
    {
        if( ( bits & Mask ) == Mask )
        ++total;
    }
    cout << !(total % 2) << endl;
    return !( total % 2 );
}