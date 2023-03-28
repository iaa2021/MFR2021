#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <algorithm>
using std::binary_search;
using std::find;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
bool greater10( int );
int main()
{
    srand( time(0) );
    const int Size = 20;
    int array[ Size ];
    ostream_iterator <int> output( cout, ", " );
    for (size_t i = 0; i < Size; i++)
    {
        array[ i ] = rand()%30 + 1;
    }
    vector<int> v( array, array + Size );
    cout << "Vector v contains \n";
    copy( v.begin(), v.end(), output );
    int a;
    vector <int>::iterator location;
    cout << "\nInput value, which location you'd like to point:\n";
    cin >> a;
    location = find( v.begin(), v.end(), a );
    if ( location != v.end() )
    {
        cout << a << " was found at location " << ( location - v.begin() ) << endl; 
    }
    else
    cout << a << " was not found " << endl;
    location = find_if( v.begin(), v.end(), greater10 );
    if( location != v.end() )
    cout << "\nFirst value more than 10 is " << *location << " and it's location is " << ( location - v.begin() ) + 1 << endl;
    else
    cout << "\nSuch values were not found " << endl;
    sort( v.begin(), v.end() );
     cout << "Vector v after sorting contains \n";
    copy( v.begin(), v.end(), output );
    cout << "\nUsing binary_search of " << a << endl;
    if( binary_search( v.begin(), v.end(), a ) )
    cout << a << " was found in vector v.\n";
    else
    cout << a << " was not found in vector v.\n";
    cout << endl;
    cin.get();
    return 0;
}
bool greater10( int value )
{
    return value > 10;
}