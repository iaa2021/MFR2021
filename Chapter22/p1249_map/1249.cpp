#include <iostream>
using std::cout;
using std::endl;
#include <map>
using std::map;
using std::less;
typedef map< int, double, less< int > > Mid;
int main()
{
    Mid pairs;
    pairs.insert( Mid::value_type( 15, 27.35 ) );
    pairs.insert( Mid::value_type( 30, 111.11 ) );
    pairs.insert( Mid::value_type( 5, 1010.11 ) );
    pairs.insert( Mid::value_type( 10, 22.22 ) );
    pairs.insert( Mid::value_type( 25, 33.33 ) );
    pairs.insert( Mid::value_type( 5, 77.54 ) );
    pairs.insert( Mid::value_type( 20, 9.345 ) );
    pairs.insert( Mid::value_type( 15, 99.35 ) );
    cout << "pairs contains\nvalue\ttype\n";
    for( Mid::const_iterator it = pairs.begin(); it != pairs.end(); ++it )
    cout << it -> first << '\t' << it -> second << endl;
    pairs[ 25 ] = 9999.99;
    pairs[ 40 ] = 8765.43;
    cout << "\nAfter inserting, pairs contains\nvalue\ttype\n";
    for( Mid::const_iterator it1 = pairs.begin(); it1 != pairs.end(); ++it1 )
    cout << it1 -> first << '\t' << it1 -> second << endl;
    return 0;
}