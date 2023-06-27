#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include <numeric> 
using std::accumulate;
#include <functional>
using std::binary_function;
#include "config.h"
int sumSquares( int, int );
template < class T >
class SumSquareClass : public binary_function< T, T, T>
{
    public:
    T operator()( const T total, const T value )
    {
        return total + value * value;
    }
};
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1294, demo of accumulate.\n";
    ostream_iterator<int> it( cout, ", " ); int size = 10, result;
    int *ptr1 = new int[ size ]; 
    for (int i = 0; i < size; i++)
    {
        ptr1[ i ] = i + 1;
    }
    vector<int> v1( ptr1, ptr1 + size );
    cout << "\nVector contains:\n";
    copy( v1.begin(), v1.end(), it );
    cout << "\nCalcule sum of squares vector's values via sumSquares() function:\n";
    cout << ( result = accumulate( v1.begin(), v1.end(), 0, sumSquares ) ) << endl;
    cout << "\nCalcule sum of squares vector's values via sumSquareClass<int>() class:\n";
    cout << (result = accumulate( v1.begin(), v1.end(), 0, SumSquareClass<int>() ));
    result = 0;
    cout << "\nCalcule sum of squares vector's values via my way:\n";
    for( auto &vl : v1 )
    {
        result += vl * vl;
    }
    cout << result << endl;
    return 0;
}
int sumSquares( int total, int value )
{
    return total + value * value;
}