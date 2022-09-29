#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::srand;
using std::rand;
#include <ctime>
using std::time;
#include <cstring>
using std::strcmp;
#include "config.h"
void ascendenceOrder( int *, int );
void descendenceOrder( int *, int );
int main( int argc, char *argv[] )
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    if( argc != 2 )
    cout << "Usage next: projectName -a(ascendence order) or -b(descendence order)\n";
    srand( time( 0 ) );
    int size = rand()%20 + 5;
    cout << "Array's size = " << size << endl;
    int *ptr = new int[ size ];
    for ( int i = 0; i < size; i++)
    {
        ptr[ i ] = rand()%60 + 1;
    }
    if( strcmp( argv[ 1 ], "-a" ) == 0 )
    {
        cout << "\nArray in ascendence order is:\n";
        ascendenceOrder( ptr, size );
    }
    if( strcmp( argv[ 1 ], "-b" ) == 0 )
    {
    cout << "\nArray in descendence order is:\n";
    descendenceOrder( ptr, size );
    }
    return 0;
}
void ascendenceOrder( int *array, int size )
{
    int hold;
    for ( int i = 0; i < size - 1; i++ )
    {
        for ( int j = i + 1; j < size; j++)
        {
            if( array[ j ] < array[ i ] )
            {
                hold = array[ i ];
                array[ i ] = array[ j ];
                array[ j ] = hold;
            }
        }
    }
    for ( int i = 0; i < size; i++)
    {
        cout << array[ i ] << ", ";
    }
}
void descendenceOrder( int *array, int size )
{
    int hold;
    for ( int i = 0; i < size - 1; i++ )
    {
        for ( int j = i + 1; j < size; j++)
        {
            if( array[ j ] > array[ i ] )
            {
                hold = array[ i ];
                array[ i ] = array[ j ];
                array[ j ] = hold;
            }
        }
    }
    for ( int i = 0; i < size; i++)
    {
        cout << array[ i ] << ", ";
    }
}