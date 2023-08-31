#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::copy;
using std::remove;
using std::remove_copy_if;
using std::remove_copy;
#include <cstdlib>
using std::rand;
using std::srand;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
#include <ctime>
using std::time;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of remove, remove_if, remove_copy & remove_copy_if .\n";
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int size = 10;//size of array and vectors
    int value;//value for marking deletion and compare
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    cout << "\nArray contains: ";
    copy( array, array + size, it );
    vector<int> v( array, array + size );
    cout << "\nVector v contains: ";
    copy( v.begin(), v.end(), it );
    vector<int>::iterator newLastElement;
    cout << "\nInput value to remove: "; cin >> value;
    newLastElement = remove( v.begin(), v.end(), value );
    cout << "\nVector v after removing " << value << " contains:\n "; 
    copy( v.begin(), newLastElement, it );
    vector<int> v1( array, array + size );
    vector<int> c( size, 0 );
    cout << "\n\nVector v1 before removing all " << value <<" and copying into c:\n ";
    copy( v1.begin(), v1.end(), it );
    remove_copy( v1.begin(), v1.end(), c.begin(), value );
    cout << "\nVector c without " << value << " consists of:\n";
    copy( c.begin(), c.end(), it );
    cout << "\nInput value, you'd like to remove from v1 greater than,\n";
    cout << " before copy v1 into the c:\n";
    cin >> value; c.clear();
    for( auto &it1 : v1 )
    {
        if( it1 < value )
        c.push_back( it1 );
    }
    cout << "\nNow vector c contains:\n";
    copy( c.begin(), c.end(), it );
    cout << endl;
    return 0;
}