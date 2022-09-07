#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <numeric>
using std::accumulate;
#include<functional>
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int sumSquares( int total, int value )
{
    return total + value * value;
}
template < class T >
class SumSquaresClass : public std::binary_function<T, T, T>
{
public:
    T operator()( const T &total, const T value )
    {
        return total + value * value;
    }
};

int main()
{
    const int size = 10;
    int array[ size ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> integers( array, array + size );
    ostream_iterator<int> output(cout, ", ");
    int result;
    cout << "Vector integers contains:\n";
    copy( integers.begin(), integers.end(), output );
    result = accumulate( integers.begin(), integers.end(), 0, sumSquares );
    cout << "\nSum of squares of integers using SumSquares function is " << result << endl;
    cin.get();
    return 0;
}
