#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
int main()
{
    srand( time( 0 ) );
    vector <int> v;
    for (size_t i = 0; i < 100; i++)
    {
        v.push_back( rand()%1000 + 1 );
    }
    cout << "Vector is:\n";
    for (size_t i = 0; i < 100; i++)
    {
        cout << setw( 4 ) << v.at( i ) << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    int hold;
    for (size_t i = 0; i < 99; i++)
    {
        for (size_t j = i + 1; j < 100; j++)
        {
            if( v.at( i ) > v.at( j ) )
            {
                hold = v.at( i );
                v.at( i ) = v.at( j );
                v.at( j ) = hold;
            }
        }
    }
    cout << "\nSorted vector is:\n";
    for (size_t i = 0; i < 100; i++)
    {
        cout << setw( 4 ) << v.at( i ) << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    int key, attempt = -1; size_t min = 0, max = v.size(), n;
    cout << "Input search key: ";
    cin >> key;
    n = ( max - min ) / 2;
    attempt = v.at( n );
    while ( key != attempt )
    {
        if ( key > v.at( n ))
            min = n;
        else
            max = n;

        n = ( max - min ) / 2;
        attempt = v.at( n );
    }
    if( v.at( n ) == key )
    cout << key << " was found in " << n << " position.\n";
    return 0;
}

