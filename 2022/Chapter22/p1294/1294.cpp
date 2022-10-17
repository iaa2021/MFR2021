#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
using std::copy;
#include <numeric>
using std::accumulate;
#include <functional>
using std::binary_function;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
int sumSquares( int total, int value )
{
    return total + value * value;
}
template < class T >
class sumSquaresClass : public std::binary_function< T, T, T >
{
public:
T operator()( const T &total, const T&value )
{
    return total + value * value;
}
};

int main()
{
    const int Size = 10;
    int array[ Size ]; int result;
    for( int i = 0; i < Size; i++ )
    {
        array[ i ] = i + 1;
    }
    vector< int > integers( array, array + Size );
    ostream_iterator <int> output( cout, ", " );
    cout << "Vector integers contains:\n";
    copy( integers.begin(), integers.end(), output );
    result = accumulate( integers.begin(), integers.end(), 0, sumSquares );
    cout << "\nSum squares of vector integers using sumSquares function is: " << result << endl;
    result = accumulate( integers.begin(), integers.end(), 0, sumSquaresClass<int>() );
    cout << "\nSum squares of vector integers using\nbinary function of sumSquareClass<int> object is ";
    cout << result;
    cout << endl;
    return 0;
}
