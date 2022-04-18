#include <iostream>
using std::cout;
using std::endl;
#include <list>
using std::list;
#include <algorithm>// copy
#include <iterator> // ostream_iterator
template < class T >
void printList( list < T > & );
int main()
{
    const int Size = 4;
    int array [ Size ] = { 2, 4, 6, 8 };
    list < int > values;
    list < int > otherValues;
    values.push_front( 1 );
    values.push_front( 2 );
    values.push_back( 4 );
    values.push_back( 3 );
    cout << "The values list contains:\n";
    printList( values );
    values.sort();
    cout << "\nThe values list after sorting contains:\n";
    printList( values );
    otherValues.insert( otherValues.begin(), array, array + Size );
    cout << "\nThe otherValues list after inserting contains:\n";
    printList( otherValues );
    values.splice( values.begin(), otherValues );
    cout << "\nThe values list after splicing otherValues list contains:\n";
    printList( values );
    cout << "\nThe otherValues list after splicing to values list contains:\n";
    printList( otherValues );
    values.sort();
    cout << "\nThe values list after sorting contains:\n";
    printList( values );
    otherValues.insert( otherValues.begin(), array, array + Size );
    cout << "\nThe otherValues list after inserting an array contains:\n";
    printList( otherValues );
    values.merge( otherValues );
    cout << "\nThe values list after merging otherValues list contains:\n";
    printList( values );
    cout << "\nThe otherValues list after mergining with values list contains:\n";
    printList( otherValues );
    values.pop_back();
    values.pop_front();
    cout << "\nThe values list after pop_back and pop_front contains:\n";
    printList( values );
    values.unique();
    cout << "\nThe values list after unique contains:\n";
    printList( values );
    values.swap( otherValues );
    cout << "\nThe values list after swap with otherValues contains:\n";
    printList( values );
    cout << "\nThe otherValues list after swap with values list contains:\n";
    printList( otherValues );
    values.assign( otherValues.begin(), otherValues.end() );
    cout << "\nThe values list after assign with otherValues contains:\n";
    printList( values );
    values.merge( otherValues );
    cout << "\nThe values list after merging otherValues list contains:\n";
    printList( values );
    values.remove( 4 );
    cout << "\nThe values list after removing ( 4 ) contains:\n";
    printList( values );
    
    cout << endl;
    return 0;
}
template < class T >
void printList( list < T > &listRef )
{
    if( listRef.empty() )
    cout << "The list is empty.\n";
    else
    {
        std::ostream_iterator <T> output( cout, ", " );
        std::copy( listRef.begin(), listRef.end(), output );
    }
}