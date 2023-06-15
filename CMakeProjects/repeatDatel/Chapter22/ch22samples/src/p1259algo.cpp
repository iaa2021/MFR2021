#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <algorithm>
using std::equal;
using std::mismatch;
using std::lexicographical_compare;
#include <iterator>
using std::ostream_iterator;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1259, algorithm STL equal, mismatch, ";
    cout << "lexicographical_compare.\n";
    ostream_iterator<int> it( cout, ", " ); int size = 10;
    int *ptr1 = new int[ size ]; int *ptr2 = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        ptr1[ i ] = i + 1;
    }
    for (int i = 0; i < size; i++)
    {
        if( i == 4 || i == 7 )
        ptr2[ i ] = 1000;
        else
        ptr2[ i ] = i + 1;
    }
    vector<int> v1( ptr1, ptr1 + size ); vector<int> v2( ptr1, ptr1 + size );
    vector<int> v3( ptr2, ptr2 + size );
    cout << "\nVector v1 contains:\n"; copy( v1.begin(), v1.end(), it );
    cout << "\nVector v2 contains:\n"; copy( v2.begin(), v2.end(), it );
    cout << "\nVector v3 contains:\n"; copy( v3.begin(), v3.end(), it );
    cout << endl;
    bool result = equal( v1.begin(), v1.end(), v2.begin() );
    cout << "\nDemonstration of equal algo:\n";
    cout << "\nVectors v1 and v2 " << ( result ? "are " : "are not " ) << "equal.\n";
    result = equal( v1.begin(), v1.end(), v3.begin() );
    cout << "\nVectors v1 and v3 " << ( result ? "are " : "are not " ) << "equal.\n";
    cout << "\nDemonstration of mismatch algo:\n";
    std::pair< vector<int>::iterator, vector<int>::iterator > location;
    location = mismatch( v1.begin(), v1.end(), v3.begin() );
    cout << "\nThere is a mismatch in location " << location.first - v1.begin();
    cout << ", there v1 contains " << *location.first << ", and v3 contains ";
    cout << *location.second << endl;
    cout << "\nDemonstration of lexicographical_compare algo:\n";
    char *text1 = new char[ 5 ]; text1 = "Hello";
    char *text2 = new char[ 7 ]; text2 = "Bye Bye";
    result = lexicographical_compare( text1, text1 + 5, text2, text2 + 7 );
    cout << text1 << ( result ? " is less than " : " is equal or more than " );
    cout << text2 << "\nresult is " << result << endl;
    return 0;
}