#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::calloc;
using std::realloc;
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include "config.h"
void print( int *, int );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersize on page 1371, calloc and realloc function:\n";
    srand( time( 0 ) );
    int a;//size of array
    cout << "Input array's size: "; cin >> a;
    int *arrPtr = static_cast<int*>( calloc( a, sizeof(int) ) );
    if( arrPtr != nullptr )
    {
        for (int i = 0; i < a; i++)
        {
            arrPtr[ i ] = rand()%50 + 1;
        }
    }
    cout << "\nNow array contains:\n";
    print( arrPtr, a );
    cout << "\nRedusing array's memory for a half.\n";
    arrPtr = static_cast<int*>( realloc( arrPtr, (a/2) * sizeof(int) ) );
    cout << "\nNow array's size is: " << (sizeof(arrPtr) / sizeof( arrPtr[0]));
    cout << ", and it contains:\n";
    for (size_t i = 0; i < sizeof(arrPtr) / sizeof( arrPtr[0]); i++)
    {
        cout << arrPtr[ i ] << ", ";
    }
    cout << endl;
    free( arrPtr );
    return 0;
}
void print( int *ptr, int count )
{
    for (size_t i = 0; i < count; i++)
    {
        cout << ptr[ i ] << ", ";
    }
    cout << endl;
}