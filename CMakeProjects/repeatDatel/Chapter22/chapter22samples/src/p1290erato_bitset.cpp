#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include<cmath>
using std::sqrt;
#include <bitset>
using std::bitset;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of solving Eratosphen's sieve via bitset.\n";
    const int size = 1023;
    int value;
    std::bitset<size> sieve;
    sieve.flip();//switch all bits, by default = 0, into 1
    sieve.reset( 0 );//reset 0 and 1 values in sieve
    sieve.reset( 1 );
    int finalBit = sqrt( static_cast<double>( sieve.size() ) + 1 );
    //define all prime numbers in the range from 2 to 1024
    for (int i = 0; i < finalBit; i++)
    {
        if( sieve.test( i ) )//if bit i is on
        {
            for (int j = i * 2; j < size; j += i)
            sieve.reset( j );//reset bit j
        }
    }
    cout << "\nThe prime numbers in diapason from 0 till 1023 are:\n";
    int counter = 1;
    for (int i = 2; i < size; i++)
    {
        if ( sieve.test( i ) )
        {
            cout << setw( 5 ) << i;
            counter++;
            if( counter % 12 == 0 )
            cout << endl;
        }
    }
    cout << "\nThere are " << counter << " prime numbers in range from 0 till 1023" << endl; 
    
    return 0;
}