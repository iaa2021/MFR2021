#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <set>
using std::multiset;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <algorithm>
using std::copy;
#include <ctime>
using std::time;
#include <map>
#include "config.h"

int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1243, multiset STL container:\n";
    srand( time( 0 ) );
    multiset<int, std::less<int> > mSet;
    ostream_iterator<int> it( cout, ", " );
    for (int i = 0; i < 15; i++)
    {
        mSet.insert( rand()%20 + 1 );
    }
    cout << "\nMultiset comntains:\n";
    copy( mSet.begin(), mSet.end(), it );
    int value;
    cout << "\nInput value, you'd like to count: ";
    cin >> value;
    cout << "\nThere are " << mSet.count( value ) << " values of ";
    cout << value << " in multiset." << endl;
    cout << "\nInput value, you'd like to insert: ";
    cin >> value;
    mSet.insert( value );
    cout << "After modification multiset contains:\n";
    copy( mSet.begin(), mSet.end(), it );
    cout << endl;
    multiset<int, std::less<int> >::const_iterator result;
    cout << "\nInput value, you'd like to find : ";
    cin >> value;
    result = mSet.find( value );
    cout << ( result != mSet.end() ? " value's found.\n" : " value's not found.\n" );
    int *array = new int[ 10 ];
    for (int i = 0; i < 10; i++)
    {
        array[ i ] = ( i + 1 ) + 2;
    }
    cout << "\nArray contains:\n";
    copy( array, array + 10, it );
    cout << "\nAfter insertion an array multiset contains:\n";
    mSet.insert( array, array + 10 );
    copy( mSet.begin(), mSet.end(), it );
    cout << "\nInput value, you'd like to make upper bound : ";
    cin >> value;
    cout << "\nUpper bound of multiset value " << value << " is ";
    cout << *( mSet.upper_bound( value ) );
    cout << "\nLower bound of multiset value " << value << " is ";
    cout << *( mSet.lower_bound( value ) );
    cout << "\nWork with equal_range for multiset.\n";
    std::pair<multiset<int, std::less<int>>::const_iterator, multiset<int, std::less<int>>::const_iterator > p;
    p = mSet.equal_range( value );
    cout << "\nEqual range with " << value << " is:\n";
    cout << "lower_bound is : " << *(p.first) ;
    cout << "\nupper_bound is : " << *(p.second);
    cout << endl;
    return 0;
}