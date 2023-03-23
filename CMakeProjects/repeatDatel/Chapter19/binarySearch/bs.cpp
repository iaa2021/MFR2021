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
int binarySearch( vector<int>, int, size_t, size_t );
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
    int key;
    cout << "Input search key: ";
    cin >> key;
    cout << key << " was found in ";
    cout << binarySearch( v, key, 0, v.size() ) << " position.\n";
    cout << "\nLet's check it, input position:\n";
    cin >> key;
    cout << "\nValue in key position is: " << v.at( key ) << endl;
    return 0;
}
int binarySearch( vector<int> v, int key, size_t min, size_t max )
{
    int n = ( max + min )/2;
    if( key == v.at( n ) )
    return n;
    else
    {
        if( key > v.at( n ) )
        {
            min = n;
        }
        else 
        { max = n; }
        return binarySearch( v, key, min, max );   
    }
}
