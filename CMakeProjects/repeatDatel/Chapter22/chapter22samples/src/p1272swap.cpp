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
    cout << "\nDemonstration of swap, iter_swap и swap.ranges .\n";
    int size = 20;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    cout << "\nArray contains:\n";
    copy( array, array + size, it );
    cout << "\nArray after swapping a[1] and a[0] contains:\n";
    std::swap( array[ 0 ], array[ 1 ] );
    copy( array, array + size, it );
    cout << "\nArray after swapping via iterators a[3] and a[4] contains:\n";
    std::iter_swap( &array[ 3 ], &array[ 4 ] );
    copy( array, array + size, it );
    cout << "\nArray after swapping first 5 elements with 5 last contains:\n";
    std::swap_ranges( array, array + 5, array + 15 );
    copy( array, array + size, it );
    cout << endl;
    return 0;
}