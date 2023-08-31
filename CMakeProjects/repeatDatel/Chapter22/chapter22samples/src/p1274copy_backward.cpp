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
    cout << "\nDemonstration of copy_backward, merge, unique и reverse .\n";
    int size = 15;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    int *array1 = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array1[ i ] = i + 1;
    }
    vector<int> v( array, array + size );
    vector<int> v1( array1, array1 + size );
    cout << "\nArray contains:\n";
    copy( array, array + size, it );
    cout << "\nArray1 contains:\n";
    copy( array1, array1 + size, it );
    vector<int> results( v1.size() );
    vector<int> results1;
    cout << "\nAfter copy_backward vector results contains:\n";
    std::copy_backward( v1.begin(), v1.end(), results.end() );
    copy( results.begin(), results.end(), it );
    results.clear(); results.reserve( v.size() + v1.size() );
    cout << "\nResult's capacity is: " << results.capacity()<< endl;
    cout << "\nNow we merging v and v1 elements into result, and sorting after it.\n ";
    std::merge( v.begin(), v.end(), v1.begin(), v1.end(), std::back_inserter( results1 ) );
    sort( results1.begin(), results1.end() );
    copy( results1.begin(), results1.end(), it );
    results1.clear();
    cout << "\nNow we making same using sort and copy functions:\n ";
    results1.assign( v.begin(), v.end() );
    results1.insert( results1.end(), v.begin(), v.end() );
    std::sort( results1.begin(), results1.end() );
    copy( results1.begin(), results1.end(), it );
    cout << "\nNow, we excluding repeating values from results1:\n";
    vector<int>::iterator endLocation = std::unique( results1.begin(), results1.end() );
    copy( results1.begin(), endLocation, it );
    cout << "\nVector v1 after reverse:\n";
    std::reverse( v1.begin(), v1.end() );
    copy( v1.begin(), v1.end(), it );
    cout << endl;
    return 0;
}