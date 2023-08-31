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
    cout << "\nDemonstration of random_shuffle, count, count_if,\n"; 
    cout << "min_element, max_element, accumulate, for_each и transform.\n"; 
    int size = 20;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    vector<int> v( array, array + size );
    cout << "\nVector v before sorting:\n";
    copy( v.begin(), v.end(), it );
    sort( v.begin(), v.end() );
    cout << "\nVector v after sorting:\n";
    copy( v.begin(), v.end(), it );
    cout << "\nInput value, you'd like to count:\n";
    cin >> value;
    value1 = count( v.begin(), v.end(), value );
    cout << "\nVector contains " << value << " only " << value1 << " times.\n";
    cout << "\nCounting values more than 9:\n";
    value1 = std::count_if( v.begin(), v.end(), greater9 );
    cout << "\nVector contains " << value1 << " values > 9.\n";
    cout << "Minimum element in vector is: ";
    cout << *(std::min_element( v.begin(), v.end() ));
    cout << "\nMaximum element in vector is: ";
    cout << *(std::max_element( v.begin(), v.end() ));
    cout << "\nThe total sum of vector's values is: ";
    cout << std::accumulate( v.begin(), v.end(), 0 );
    cout << "\nOutput square of values:\n";
    cout << std::for_each( v.begin(), v.end(), outputSquare );
    vector<int> cube( size );
    cout << "\nCalculate every value's cube and put it into cube vector:\n";
    std::transform( v.begin(), v.end(), cube.begin(), calculateCube );
    copy( cube.begin(), cube.end(), it );
    cout << endl;
    return 0;
}
bool greater9( int x )
{
    return x > 9;
}
void outputSquare( int value )
{
    cout << value * value << ", ";
}
int calculateCube( int value )
{
    return value * value * value;
}