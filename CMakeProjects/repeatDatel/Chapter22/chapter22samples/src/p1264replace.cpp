#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::copy;
using std::replace;
using std::replace_copy;
using std::replace_if;
using std::replace_copy_if;
#include <cstdlib>
using std::rand;
using std::srand;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
#include <ctime>
using std::time;
#include "config.h"
bool greater9( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of replace, replace_if, replace_copy и replace_copy_if  .\n";
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int size = 10;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    int *array = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array[ i ] = rand()%50 + 1;
    }
    cout << "\nArray contains: ";
    copy( array, array + size, it );
    vector<int> v( array, array + size );
    cout << "\nVector v contains: ";
    copy( v.begin(), v.end(), it );
    cout << "\nInput value for remove: "; cin >> value;
    cout << "\nInput value for replace: "; cin >> value1;
    cout << "\nAfter replace " << value << " on " << value1 << " vector contains:\n";
    replace( v.begin(), v.end(), value, value1 );
    copy( v.begin(), v.end(), it );
    vector<int> v1( array, array + size );
    cout << "\nVector v1 contains: ";
    copy( v1.begin(), v1.end(), it );
    vector<int> c( size );
    cout << "\nNow replacing some value to another from v1 and copy it into c.\n";
    cout << "\nInput value for remove: "; cin >> value;
    cout << "\nInput value for replace: "; cin >> value1;
    replace_copy( v1.begin(), v1.end(), c.begin(), value, value1 );
    cout << "\nAfter replace " << value << " on " << value1 << " c contains:\n";
    copy( c.begin(), c.end(), it );
    cout << "\nNow changing all elements in v1 greater than 9 to 100:\n";
    replace_if( v1.begin(), v1.end(), greater9, 100 );
    cout << "\nAfter replace values more than 9 into 100 v1 contains:\n";
    copy( v1.begin(), v1.end(), it );
    vector<int>c1(size);
    cout << "\nReplacing values more than 9 from v1 into the 1000 & copy into c1:\n";
    replace_copy_if( v1.begin(), v1.end(), c1.begin(), greater9, 1000 );
    cout << "\nAfter replace values more than 9 into 1000 c contains:\n";
    copy( c1.begin(), c1.end(), it );
    cout << endl;
    return 0;
}
bool greater9( int x )
{
    return x > 9;
}