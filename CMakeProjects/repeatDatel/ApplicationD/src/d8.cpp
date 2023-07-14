#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#define PRINT( a )  ( print( a ) ); 
string print( string );
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::copy;
#include "config.h"
void printArray( int *, int );
int sumArray( int *, int );
#define PRINTARRAY( a, b )( printArray( a, b ) );
#define SUMARRAY( a, b )( sumArray( a, b ) );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise on page 1386, d8, print macros:\n";
    string text;
    cout << "Input string:\n";
    getline( cin, text );
    cout << "String is: " << PRINT( text );
    cout << "\nExersise on page 1386, d9, print array:\n";
    srand( time( 0 ) ); int count;
    cout << "Input array's size: "; cin >> count;
    int *ptr = new int[ count ];
    for (size_t i = 0; i < count; i++)
    {
        ptr[ i ] = rand()%50 + 1;
    }
    cout << "\nArray is:\n";
    PRINTARRAY( ptr, count );
    cout << "\nArray's sum is: " << SUMARRAY( ptr, count );
    cout << endl;
    return 0;
}
string print( string a )
{
    return a;
}
void printArray( int *ptr, int count )
{
    for (size_t i = 0; i < count; i++)
    { 
        cout << ptr[ i ] << ", ";
    }
}
int sumArray( int *ptr, int count )
{
    int sum = 0;
    for (size_t i = 0; i < count; i++)
    { 
        sum +=  ptr[ i ];
    }
    return sum;
}