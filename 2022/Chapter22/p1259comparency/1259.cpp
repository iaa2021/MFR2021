#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;
#include <vector>
using std::vector;
#include <algorithm>
using std::equal;
using std::mismatch;
using std::lexicographical_compare;
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    const int Size = 10;
    int a1[Size];
    for (size_t i = 0; i < Size; i++)
    {
        a1[i] = i + 1;
    }
    int a2[Size];
    for (size_t i = 0; i < Size; i++)
    {
        a2[i] = i + 1;
    }
    a2[5] = 1000;
    ostream_iterator<int> output( cout, ", " );
    vector<int> v1( a1, a1 + Size );
    vector<int> v2( a1, a1 + Size );
    vector<int> v3( a2, a2 + Size );
    cout << "Vector v1 contains:\n";
    copy( v1.begin(), v1.end(), output );
    cout << "\nVector v2 contains:\n";
    copy( v2.begin(), v2.end(), output );
    cout << "\nVector v3 contains:\n";
    copy( v3.begin(), v3.end(), output );
    bool result = equal( v1.begin(), v1.end(), v2.begin() );
    cout << "\nThe result of comparency v1 & v2 is " << boolalpha << result << endl;
    result = equal( v1.begin(), v1.end(), v3.begin() );
    cout << "\nThe result of comparency v1 & v3 is " << result << endl;
    std::pair < vector<int>::iterator, vector<int>::iterator > location;
    location = mismatch( v1.begin(), v1.end(), v3.begin() );
    cout << "\nThere is mismatch between v1 and v3 at location " << ( location.first - v1.begin() );
    cout << "\nthere v1 contains " << *location.first << " and v3 contains " << *location.second << ".\n";
    char c1[Size] = "Hello";
    char c2[Size] = "Bye bye";
    result = lexicographical_compare( c1, c1 + Size, c2, c2 + Size );
    cout << c1 << ( result? " is less than " : " is greater than or equal to " ) << c2 << ".\n";
    cout << endl;
    return 0;
}