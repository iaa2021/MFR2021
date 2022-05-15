#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <algorithm>
using std::equal;
using std::reverse_copy;
using std::copy;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
template <class T>
bool palindrom( vector<T> );
int main()
{
    vector<int>v; int a;
    ostream_iterator<int> output( cout, ", " );
    cout << "Input integers in vector, -1 to end:\n";
    cin >> a;
    while (a != -1)
    {
        v.push_back(a);
        cin >> a;
    }
    cout << "Vector v contains:\n";
    copy(v.begin(), v.end(), output);
    cout << "\nThere is " << ( palindrom( v )? "a palindrom in vector v.":"not a palindrom in vector v." );
    cout << endl;
    return 0;
}
template < class T >
bool palindrom( vector<T> a )
{
    vector<T>a1(a.size());
    reverse_copy( a.begin(), a.end(), a1.begin() );
    if( equal( a.begin(), a.end(), a1.begin() ) )
    return true;
    else
    return false;
}
