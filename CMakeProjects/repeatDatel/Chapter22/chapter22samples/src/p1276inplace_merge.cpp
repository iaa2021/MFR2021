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
bool greater9( int );
void outputSquare( int );
int calculateCube( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of inplace_merge, unique_copy и reverse_copy.\n";  
    int size = 20;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    cout << "\nVector v before inplace_merge:\n";
    copy( v.begin(), v.end(), it );
    std::inplace_merge( v.begin(), v.begin() + v.size() / 2, v.end() );
    cout << "\nVector v after inplace_merge:\n";
    copy( v.begin(), v.end(), it );
    vector<int>results;
    std::unique_copy( v.begin(), v.end(), std::back_inserter( results ) );
    cout << "\nVector results after unique_copy contains:\n";
    copy( results.begin(), results.end(), it );
    results.clear();
    cout << "\nVector results after reverse_copy contains:\n";
    std::reverse_copy( v.begin(), v.end(), std::back_inserter( results ) );
    copy( results.begin(), results.end(), it );
    cout << endl;
    return 0;
}