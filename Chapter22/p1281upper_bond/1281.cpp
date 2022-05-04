#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::copy;
using std::lower_bound;
using std::upper_bound;
using std::equal_range;
int main()
{
    const int Size = 10;
    int array[ Size ] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
    vector<int> v( array, array + Size );
    ostream_iterator< int > output( cout, ", " );
    cout << "Array contains:\n";
    copy( array, array + Size, output );
    cout << "\nVector v contains:\n";
    copy( v.begin(), v.end(), output );
    vector< int >::iterator itLower;
    itLower = lower_bound( v.begin(), v.end(), 6 );
    cout << "\nLower bond of 6 is element " << ( itLower - v.begin() ) << " of vector v." << endl;
    vector< int >::iterator itUpper = upper_bound( v.begin(), v.end(), 6 );
    cout << "\nUpper bond of 6 is element " << ( itUpper - v.begin() ) << " of vector v." << endl;
    std::pair< vector<int>::iterator, vector<int>::iterator > eq;
    eq = equal_range( v.begin(), v.end(), 6 );
    cout << "Using equal_range:\nLower bond of 6 is element " << ( eq.first - v.begin() ) << " of vector v.";
    cout << "\nupper bond of 6 is element " << ( eq.second - v.begin() ) << " of vector v." << endl;
    cout << "Use lower_bond to locate the first point,\nat which 5 can be inserted in order.\n";
    itLower = lower_bound( v.begin(), v.end(), 5 );
    cout << "Lower bond of 5 is element " << ( itLower - v.begin() ) << " of vector v." << endl;
    cout << "\nUse upper_bond to locate the first point,\nat which 7 can be inserted in order.\n";
    itLower = upper_bound( v.begin(), v.end(), 7 );
    cout << "Upper bond of 7 is element " << ( eq.second - v.begin() ) << " of vector v." << endl;
    eq = equal_range( v.begin(), v.end(), 5 );
    cout << "Using equal_range:\nLower bond of 5 is element " << ( eq.first - v.begin() ) << " of vector v.";
    cout << "\nupper bond of 5 is element " << ( eq.second - v.begin() ) << " of vector v." << endl;
    cout << endl;
    cin.get();
    return 0;
}