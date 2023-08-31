#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::copy;
using std::replace_if;
using std::replace_copy_if;
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
#include <numeric>
#include <random>
using std::shuffle;
bool greater10( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of find, find__if, sort и binary_scarch.\n";
    int size = 20;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    cout << "\nVector v contains:\n";
    copy( v.begin(), v.end(), it );
    cout << "\nInput value for search: "; cin >> value;
    vector<int>::iterator location = std::find(v.begin(), v.end(), value );
    if( location != v.end() )
    cout << value << " was found at location " << ( location - v.begin() ) << endl;
    else
    cout << value << " was not found.\nNow seeking first value more than 10:\n";
    location = std::find_if(v.begin(), v.end(), greater10 );
    if( location != v.end() )
    {
        cout << "First value greater than 10 is " << *location;
        cout << "\nfound at location " << ( location - v.begin() ) << endl;
    } 
    else
    cout << "\nValue more than 10 wasn't found.\n";
    cout << "Now, we sorting elements:\n";
    sort( v.begin(), v.end() );
    cout << "\nVector after sort is:\n";
    copy( v.begin(), v.end(), it );
    cout << "\nInput value for binary search: ";
    cin >> value;
    if(binary_search( v.begin(), v.end(), value ))
    cout << value << " was found in vector.\n";
    else
    cout << value << " was not found in vector.\n";
    return 0;
}
bool greater10( int value )
{
    return value > 10;
}