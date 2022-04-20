#include <iostream>
using std::cout;
using std::endl;
#include <map>
using std::multimap;
using std::less;
typedef multimap< int, double, less< int > > mMid;
int main()
{
    mMid pairs;
    cout << "There are currently " << pairs.count( 15 ) << " pairs with key 15 in multimap.\n";
    pairs.insert( mMid::value_type( 15, 8.25 ) );
    pairs.insert( mMid::value_type( 15, 95.32 ) );
    cout << "There are currently " << pairs.count( 15 );
    cout << " pairs with key 15 in multimap after inserting.\n";
    pairs.insert( mMid::value_type( 30, 111.11 ) );
    pairs.insert( mMid::value_type( 10, 22.22 ) );
    pairs.insert( mMid::value_type( 25, 33.33 ) );
    pairs.insert( mMid::value_type( 20, 9.345 ) );
    pairs.insert( mMid::value_type( 5, 77.54 ) );
    cout << "\nMultimap contains key\t value\n";
    for( mMid::const_iterator )
    return 0;
}