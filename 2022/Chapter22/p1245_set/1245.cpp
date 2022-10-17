#include <iostream>
using std::cout;
using std::endl;
#include <set>
using std::set;
using std::pair;
typedef set < double > dSet;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    const int Size = 5;
    double array[ Size ] = { 1.1, 2.2, 3.5, 6.7, 8.9 };
    dSet doubleSet( array, array + Size );
    ostream_iterator< double > output( cout, ", " );
    cout << "Set contains:\n";
    copy( doubleSet.begin(), doubleSet.end(), output );
    pair< dSet::const_iterator, bool > p;
    p = doubleSet.insert( 13.8 );
    cout << endl << *( p.first ) << ( p.second? " was ": " was not " ) << "inserted.\n";
    cout << "After inserting set contains:\n";
    copy( doubleSet.begin(), doubleSet.end(), output );
    p = doubleSet.insert( 2.2 );
    cout << endl << *( p.first ) << ( p.second? " was ": " was not " ) << "inserted.\n";
    cout << "After inserting set contains:\n";
    copy( doubleSet.begin(), doubleSet.end(), output );
    cout << endl;
    return 0;
}