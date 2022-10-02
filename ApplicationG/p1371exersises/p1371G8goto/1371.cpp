#include <iostream>
using std::cout;
using std::endl;
using std:: cin;
#include <iomanip>
using std::setw;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    int size;
    cout << "Input cube's side size:\n";
    cin >> size;
    char *ptr = new char[ size * size ];
    for( int i = 0; i < size * size; i++ )
    {
        if ( i < size || i > size * size - size || i % size == 0 || ( i + 1 ) % size == 0 )
        ptr[ i ] = '*';
        else
        ptr[ i ] = ' ';
    }
    for (size_t i = 0; i < size * size; i++)
    {
        cout << setw( 2 ) << ptr[ i ];
        if( ( i + 1 ) % size == 0 )
        cout << endl;
    }
    
    cout << endl;
}