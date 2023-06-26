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
    cout << "\nDemonstration of push_heap, pop_heap, make_heap и sort_heap.\n";
    int size = 15;//size of array and vectors
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    vector<int> v1;
    cout << "\nVector before make_heap contains:\n";
    copy( v.begin(), v.end(), it );
    std::make_heap( v.begin(), v.end() );
    cout << "\nVector after make_heap contains:\n";
    copy( v.begin(), v.end(), it );
    std::sort_heap( v.begin(), v.end() );
    cout << "\nVector after sort_heap contains:\n";
    copy( v.begin(), v.end(), it );
    cout << "\nArray contains:\n";
    copy( array, array + size, it );
    cout << "\nPut array's content into v1 via push_heap:\n";
    for ( int i = 0; i < size; i++ )
    {
        v1.push_back( array[ i ] );
        std::push_heap( v1.begin(), v1.end() );
        cout << "\nv1 after push_heap array[ " << i << " ]\n";
        copy( v1.begin(), v1.end(), it );
    }
    cout << "\nPop array's content into v1 via pop_heap:\n";
    for ( unsigned int i = 0; i < v1.size(); i++ )
    { 
        std::pop_heap( v1.begin(), v1.end() - i );
        cout << "\nv1 after " << v1[ i ] << " popped from heap\n";
        copy( v1.begin(), v1.end(), it );
    }
    cout << endl;
    return 0;
}