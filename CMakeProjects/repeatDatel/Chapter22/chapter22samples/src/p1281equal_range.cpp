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
typedef vector<int>::iterator vIt;
bool greater9( int );
void outputSquare( int );
int calculateCube( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration lower_bound, upper_bound & equal_range \n";  
    int size = 10, size1 = 5;//size of array and vectors
    int value;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    std::sort( v.begin(), v.end() );
    cout << "Vector v after sorting contains:\n";
    copy( v.begin(), v.end(), it );
    cout << "\nInput value for search lower bound: ";
    cin >> value;
    vector<int>::iterator lower = std::lower_bound( v.begin(), v.end(), value );
    cout << "\nLower bound of " << value << " is element ";
    cout << ( lower - v.begin() ) << " of vector v.\n";
    cout << "It's value is " << *lower << endl;
    auto upper = std::upper_bound( v.begin(), v.end(), value );
    cout << "\nUpper bound of " << value << " is element ";
    cout << ( upper - v.begin() ) << " of vector v.\n";
    cout << "It's value is " << *upper << endl;
    cout << "\nNow use equal_range for find out both bounds.\n";
    std::pair< vIt, vIt > p;
    p = std::equal_range( v.begin(), v.end(), value );
    cout << "\nUsing equal_range lower bound is " << ( p.first - v.begin() );
    cout << " and it's value yelds " << *(p.first);
    cout << "\nupper_bound is " << ( p.second - v.begin() ) << endl;
    cout << " and it's value yelds " << *(p.second);
    cout << endl;
    return 0;
}