#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstdlib>
using std::calloc;
using std::realloc;
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
using std::begin;
using std::end;
using std::distance;
using std::iterator;
#include "config.h"
#include "malloc.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    srand( time( 0 ) );
    int a = rand()%50 + 10;//array's size
    int *newPtr;
    int *ptr = ( int *)calloc( a, sizeof( int ) );
    for( int i = 0; i < a; i++ )
    ptr[ i ] = rand()%50 + 1;
    cout << "Array size is: " << a << ", array is:\n";
    for ( int i = 0; i < a; i++)
    {
        cout << ptr[ i ] << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    cout << endl;
    newPtr = (int*)realloc( ptr, a/2 );
    int s = a/2;
    cout << "New array size is: " << s << ", array is:\n";
    for ( int i = 0; i < s; i++)
    {
        cout << newPtr[ i ] << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    cout << endl;
    return 0;
}