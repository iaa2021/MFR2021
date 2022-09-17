#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include<vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    int value; ostream_iterator<int> it( cout, ", " );
    cout << "Input number: ";
    cin >> value;
    vector <int> deleters, odds;
    for( int i = 2; i <= value/2; i++ )
    {
        if ( value % i == 0 )
        deleters.push_back(i);
    }
    if( deleters.empty() )
    {
    cout << "\nNumber " << value << " is odd.\n";
        exit( 1 );
    }
    else
    {
        cout << "\nNumber has such deleters:\n";
        copy( deleters.begin(), deleters.end(), it );
    }
    cout << "\nNumber has such odd deleters:\n";
    for (size_t i = 0; i < deleters.size(); i++)
    {
        for (int j = 2; j <= deleters.at( i )/ 2; j++)
        {
            if( deleters.at( i ) % j == 0 )
            deleters.at( i ) = 0;
        } 
        if( deleters.at( i ) != 0 )
        odds.push_back( deleters.at( i ) );
    }
    copy( odds.begin(), odds.end(), it );
    deleters.clear();
    cout << "\nNumber can be composed from such deleters:\n";
    int total = value;
    while ( total != 1 )
    {
       for (size_t i = 0; i < odds.size(); i++)
       {
        if( total % odds.at( i ) == 0 )
            {
                total /= odds.at( i );
                deleters.push_back( odds.at( i ) );
            }
       }
        while( total != 1 )
        {
            for (size_t j = 0; j < odds.size(); j++)
            {
                if( total % odds.at( j ) == 0 )
                {
                    total /= odds.at( j );
                    deleters.push_back( odds.at( j ) );
                }
            }
        }
    }
    cout << "Number = ";
    for (size_t i = 0; i < deleters.size(); i++)
    {
        if( i < deleters.size() - 1 )
        cout << deleters.at( i ) << " * ";
        if( i == deleters.size() - 1 )
        cout << deleters.at( i ) << endl; 
    }
    cout << "Now, checking Eratosphene's sieve:\n";
    cout << "Input number: ";
    cin >> value;
    int *ptr = new int[ value ];
    for ( int i = 0; i < value; i++ )
    {
        ptr[ i ] = 0;
    }
    vector< int > er;
    for ( int i = 2; i < value / 2; i++)
    {
        for ( int j = i + 1; j < value; j++)
        {
            if( j % i == 0 )
            ptr[ j ] = 1;
        }
    }
    
    
    for ( int i = 0; i < value; i++ )
    {
        if ( ptr[ i ] == 0 ) 
            { 
                er.push_back( i );
            }
    }
    cout << "\nIn diapason from 1 to " << value << " there are such odd numbers:\n";
    copy( er.begin(), er.end(), it );
    return 0;
}
