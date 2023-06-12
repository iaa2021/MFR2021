#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <iterator>
using std::ostream_iterator;
#include <stdexcept>
#include <algorithm>
using std::copy;
#include "config.h"
template <class T> 
void printList( const list<T> &list_ref );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1236, list STL container:\n";
    vector<int> v;
    for( int i = 0; i < 10; i++ )
    v.push_back( i + 1 );
    list<int> intList, intList1;
    for (size_t i = 0; i < v.size(); i++)
    {
        if( i < (v.size() + 1) /2 )
        intList.push_back( v.at( i ));
        else
        intList.push_front( v.at( i ) );
    }
    cout << "\nList contains:\n";
    printList( intList );
    intList.sort();
    cout << "\nOur list after sorting is:\n";
    printList( intList );
    cout << "\nInput array's size: ";
    int size; cin >> size;
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = ( i + 1 ) * 10;
    }
    cout << "\nArray contains:\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[ i ] << ", ";
    }
    intList1.insert( intList1.begin(), array, array + size );
    cout << "\nAfter insertion intList1 contains:\n";
    printList( intList1 );
    cout << "\nNow splice 2 lists:\n";
    intList.splice( intList.end(), intList1 );
    cout << "\nAfter splice, intList contains: ";
    printList( intList );
    cout << "\nAfter splice, intList1 contains: ";
    printList( intList1 );
    intList.unique();
    cout << "\nAfter unique, intList contains: ";
    printList( intList );
    cout << endl;
    return 0;
}
template <class T> 
void printList( const list<T> &list_ref )
{
    if( list_ref.empty() )
    cout << "\nThe list is empty.\n";
    else
    {
        ostream_iterator<T> it( cout, ", " );
        copy( list_ref.begin(), list_ref.end(), it );
    }
}