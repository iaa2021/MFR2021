#include <iostream>
using std::cout;
using std::endl;
#include <set>
using std::multiset;
using std::less;
using std::pair;
typedef multiset < int , less < int > > iMs;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;

int main()
{
    const int Size = 10;
    int array[ Size ] = { 1, 23, 43, 56, 67, 76, 12, 78, 98, 87 };
    iMs intM;
    ostream_iterator < int > output( cout, ", " );
    cout << "There are currently " << intM.count( 15 ) << " values of 15 in multiset.\n";
    intM.insert( 15 );
    intM.insert( 15 );
    cout << "After inserting there are currently " << intM.count( 15 ) << " values of 15 in multiset.\n";
    iMs::const_iterator result;
    result = intM.find( 15 );
    if( result != intM.end() )
    cout << "Find " << *result << " value.\n";
    result = intM.find( 20 );
    if( result == intM.end() )
    cout << "Didn't found " << *result << " value.\n";
    intM.insert( array, array + Size );
    cout << "\nMultiset after inserting an array is:\n";
    copy( intM.begin(), intM.end(), output );
    cout << "\nLower bound of 67 is " << *( intM.lower_bound( 67 ) ) << endl;
    cout << "\nUpper bound of 67 is " << *( intM.upper_bound( 67 ) ) << endl;
    pair< iMs::const_iterator, iMs::const_iterator > p;
    p = intM.equal_range( 67 );
    cout << "\nEqual range of 67: " << "lower bound " << *( p.first ) << " upper bound " << *( p.second );
    cout << endl;
    return 0;
}