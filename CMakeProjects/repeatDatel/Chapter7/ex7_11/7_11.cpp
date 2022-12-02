#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
int *sorting( int *, int );
#include <string>
using std::string;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    srand( time( 0 ) );
    int aSize = rand()% 20 + 1;
    int *ptr = new int[ aSize ];
    for (int i = 0; i < aSize; i++)
    {
        ptr[ i ] = rand()% 60 + 1;
    }
    cout << "Size of unsorted array is: " << aSize << endl;
    cout << "\nUnsorted array is:\n";
    for (int i = 0; i < aSize; i++)
    {
        cout << ptr[ i ] << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    sorting( ptr, aSize );
    cout << "\nSorted array is:\n";
    for (int i = 0; i < aSize; i++)
    {
        cout << ptr[ i ] << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    cout << endl;
    string text;
    cout << "Ex7.14. Input text:\n";
    getline( cin, text );
    cout << "\nText is: ";
    cout << text << endl;
    return 0;
}
int *sorting( int *array, int arraySize )
{
    for ( int i = 0; i < arraySize - 1; i++ )
    {
        for ( int j = i + 1; j < arraySize; j++ )
        {
            int hold;
            if( array[ i ] > array[ j ] )
            {
                hold = array[ i ];
                array[ i ] = array[ j ];
                array[ j ] = hold;
            }
        }
    }
    return array;
}