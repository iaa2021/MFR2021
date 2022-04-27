#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::copy;
using std::replace;
using std::replace_if;
using std::replace_copy;
using std::replace_copy_if;
#include <vector>
using std::vector;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
bool greater9( int );
int main()
{
    srand( time(0) );
    const int Size = 10;
    int array[ Size ];
    for (size_t i = 0; i < Size; i++)
    {
        array[ i ] = rand()%15 + 1;
    }
    ostream_iterator<int> output( cout, ", " );
    vector<int>v( array, array + Size );
    cout << "Vector v before replacing all 10:\n";
    copy( v.begin(), v.end(), output );
    //replace in v1 all 10 with 100
    replace( v.begin(), v.end(), 10, 100 );
    cout << "\nVector v after replacing all 10 with 100:\n";
    copy( v.begin(), v.end(), output );
    vector<int> v1( array, array + Size );
    vector<int> c( Size, 0 );
    //replace in v1 all 10 with 100 and paste v1 in c
    replace_copy( v1.begin(), v1.end(), c.begin(), 10, 100 );
    cout << "\nVector c after replacing 10 with 100 in v1 and copy it in c:\n";
    copy( c.begin(), c.end(), output );
    vector<int> v2( array, array + Size );
    //replace in v1 values greater than 9 with 100
    replace_if( v2.begin(), v2.end(), greater9, 100 );
    cout << "\nVector v2 after replacing values greater than 9 with 100:\n";
    copy( v2.begin(), v2.end(), output );
    vector<int> v3( array, array + Size );
    vector<int> c3( Size, 0 );
    //replace in v3 values greater than 9 with 100 and paste v3 in c3
    replace_copy_if( v3.begin(), v3.end(), c3.begin(), greater9, 100 );
    cout << "\nVector c3 after replacing values more than 9 with 100 in v1 and copy it in c3:\n";
    copy( c3.begin(), c3.end(), output );
    cout << endl;
    return 0;
}
bool greater9( int number )
{
    return number > 9;
}