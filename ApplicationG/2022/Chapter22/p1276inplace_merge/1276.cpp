#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
using std::back_inserter;
#include <algorithm>
using std::inplace_merge;
using std::unique_copy;
using std::reverse_copy;
int main()
{
    const int Size = 10;
    int array1[ Size ] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
    vector<int>v(array1, array1 + Size);
    ostream_iterator<int> output( cout, ", " );
    cout << "Vector v contains: ";
    copy( v.begin(), v.end(), output );
    inplace_merge( v.begin(), v.begin() + 5, v.end() );
    cout << "\nAfter implace_merge vector v contains: ";
    copy( v.begin(), v.end(), output );
    vector<int> results;
    unique_copy( v.begin(), v.end(), back_inserter( results ) );
    cout << "\nAfter unique_copy vector results contains: ";
    copy( results.begin(), results.end(), output );
    vector<int> results2;
    reverse_copy( v.begin(), v.end(), back_inserter( results2 ) );
    cout << "\nAfter reverse_copy vector results2 contains: ";
    copy( results2.begin(), results2.end(), output );
    cout << endl;
    return 0;
}