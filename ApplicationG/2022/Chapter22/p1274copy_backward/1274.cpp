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
using std::copy_backward;
using std::merge;
using std::unique;
using std::reverse;

int main()
{
    const int Size = 5;
    int array1[ Size ] = { 1, 3, 5, 7, 9 };
    int array2[ Size ] = { 2, 4, 5, 7, 9 };
    vector <int>v1( array1, array1 + Size );
    vector <int>v2 ( array2, array2 + Size );
    ostream_iterator <int> output( cout, ", " );
    cout << "Vector v1 contains: ";
    copy( v1.begin(), v1.end(), output );
    cout << "\nVector v2 contains: ";
    copy( v2.begin(), v2.end(), output );
    vector <int> results( v1.size() );
    copy_backward( v1.begin(), v1.end(), results.end() );
    cout << "\nVector results after copy_backward contains: ";
    copy( results.begin(), results.end(), output );
    vector <int> results1( v1.size() + v2.size() );
    merge( v1.begin(), v1.end(),  v2.begin(), v2.end(), results1.begin() );
    cout << "\nVector results1 after merge v1 and v2 contains: ";
    copy( results1.begin(), results1.end(), output );
    vector<int>::iterator endLocation = unique( results1.begin(), results1.end() );
    cout << "\nAfter unique results1 contains: ";
    copy( results1.begin(), endLocation, output );
    reverse( v1.begin(), v1.end() );
    cout << "\nVector v1 after reverse contains: ";
    copy( v1.begin(), v1.end(), output );
    vector <int> results2;
    merge( v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter( results2 ) );
    cout << "\nVector results2 after merge v1 and v2 using back_inserter contains:\n";
    copy( results1.begin(), results1.end(), output );
    cout << endl;
    return 0;
}