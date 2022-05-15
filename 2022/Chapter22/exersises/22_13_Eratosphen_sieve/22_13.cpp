#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <bitset>
using std::bitset;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <cmath>
using std::sqrt;
#include <iomanip>
using std::setw;

int main()
{
    bitset < 1024 > a;
    a.flip(); 
    a.reset(0); a.reset(1);
    int b = sqrt( static_cast< double > ( a.size() ) ) + 1;
    for ( int i = 2; i < b; i++)
    {
        if ( a.test(i) )
        {
            for ( int j = 2 * i; j < a.size(); j += i )
            {
               a.reset(j);
            }
        }
    }
    cout << "\nThere are such prime numbers in array:\n";
    for ( int i = 0, count = 1; i < a.size(); i++)
    {
        if ( a.test(i) )
        {
            cout << setw(5) << i << ", ";
            if (count++ % 12 == 0)
            {
                cout << endl;
            }
        }
    }
    int c; //integer for check, is it prime number or not
    cout << "\nInput number for check, is it prime number or not:\n";
    cin >> c;
    while ( c != -1 )
    {
        if ( a.test(c) )
        {
            cout << c << " is prime number.\n";
        }
        else
        {
            cout << c << " is not prime number and has such prime dividers:\n";
            for( int i = 2; i <= c/2; i++ )
            {
                if( c % i == 0 && a.test(i) )
                cout << i << ", ";
            }
            cout << endl;
        }
        cin >> c;
    }
    cout << "\nThe task is complete." << endl;
    cin.get();
    system("PAUSE");
    return 0;
}