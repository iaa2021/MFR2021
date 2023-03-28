#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <algorithm>
using std::copy;
using std::make_heap;
using std::sort_heap;
using std::push_heap;
using std::pop_heap;
int main()
{
    srand( time(0) );
    const int Size = 10;
    int array[ Size ];
    for (size_t i = 0; i < Size; i++)
    {
        array[ i ] = rand()%100 + 1;
    }
    vector<int> v( array, array + Size );
    vector<int> v2;
    ostream_iterator< int > output( cout, ", " );
    cout << "\nVector v before make_heap contains:\n";
    copy( v.begin(), v.end(), output );
    make_heap( v.begin(), v.end() );
    cout << "\nVector v after make_heap contains:\n";
    copy( v.begin(), v.end(), output );
    sort_heap( v.begin(), v.end() );
    cout << "\nVector v after sort_heap contains:\n";
    copy( v.begin(), v.end(), output );
    cout << "\nArray contains:\n";
    copy( array, array + Size, output );
    cout << endl;
    for (size_t i = 0; i < Size; i++)
    {
        v2.push_back( array[ i] );
        push_heap( v2.begin(), v2.end() );
        cout << "\nAfter push_heap ( v2[ " << i << " ]: ";
        copy( v2.begin(), v2.end(), output );
    }
    cout << endl;
    for ( unsigned i = 0; i < v2.size(); i++)
    {
        cout << "\nv2 after " << v2.at( 0 ) << " was popped from heap\n";
        pop_heap( v2.begin(), v2.end() - i );
        copy( v2.begin(), v2.end(), output );
    }
    cout << endl;
    cin.get();
    return 0;
}