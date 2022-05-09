#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include<bitset>
using std::bitset;
#include <cmath>
using std::sqrt;
int main()
{
    const int Size = 1024;
    int value;
    bitset <Size> sieve;
    sieve.flip();
    sieve.reset(0);
    sieve.reset(1);
    int finalBit = sqrt( static_cast<double>( sieve.size() ) ) + 1;
    for (int i = 2; i < finalBit; i++)
    {
        if( sieve.test(i) )
        {
            for (size_t j = 2 * i; j < Size; j += i)
            {
                sieve.reset( j );
            }
        }
    }
    cout << "There are such prime numbers in diapason from 2 to " << sieve.size() << endl;
    for (int i = 0, count = 1; i < Size; i++)
    {
        if ( sieve.test( i ) )
        {
            cout << setw( 5 ) << i  << ", ";
            if( count++ % 12 == 0 )
                cout << endl;
        }
    }
    cout << "\nInput value for checking is this value prime or not, -1 to end:\n";
    cin >> value;
    while( value != -1 )
    {
        if( sieve.test( value ) )
        cout << "\n" << value << " is prime number.\n";
        else
        cout << "\n" << value << " is not prime number.\n";
        cin >> value;
    }
    cout << "The job is over.\n";
    return 0;
}