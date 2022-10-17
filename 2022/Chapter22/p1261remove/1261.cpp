#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::remove;
using std::remove_if;
using std::remove_copy;
using std::remove_copy_if;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <vector>
using std::vector;
bool greater9( int );
int main()
{
    srand( time(0) );
    const int Size = 10;
    int array[ Size ];
    for (size_t i = 0; i < Size; i++)
    {
        array[i] = rand()%30 + 1;
    }
    ostream_iterator<int> output( cout, ", " );
    vector <int> v( array, array + Size );
    cout << "Vector v contains:\n";
    copy( v.begin(), v.end(), output );
    vector<int>::iterator newLastElement = remove( v.begin(), v.end(), 10 );
    cout << "\nAfter removing all 10 from vector, v contains " << endl;
    copy( v.begin(),newLastElement, output );
    vector <int> v2( array, array + Size );
    cout << "\nVector v2 before removing and copying contains:\n";
    copy( v2.begin(), v2.end(), output );
    vector<int> c( Size, 0 );
    remove_copy( v2.begin(), v2.end(), c.begin(), 10 );//remove all 10 from v2 & copy result into c
    cout << "\nVector c after removing all 10 from v2 & copying v2 in it contains:\n";
    copy( c.begin(), c.end(), output );
    vector <int> v3( array, array + Size );
    cout << "\nVector v3 before removing values more than 9 contains:\n";
    copy( v3.begin(), v3.end(), output );
    newLastElement = remove_if( v3.begin(), v3.end(), greater9 );
    cout << "\nVector v3 after removing values more than 9 contains:\n";
    copy( v3.begin(), newLastElement, output );
    vector<int> c2( Size, 0 );
    vector <int> v4( array, array + Size );
    cout << "\nVector v4 before removing values more than 9 and copying it into vector c contains:\n";
    copy( v4.begin(), v4.end(), output );
    remove_copy_if( v4.begin(), v4.end(), c2.begin(), greater9 );
    cout << "\nVector c2 after removing values more than 9 from v4 & copying v2 in it contains:\n";
    copy( c2.begin(), c2.end(), output );
    cout << endl;
    return 0;
}
bool greater9( int number )
{
    return number > 9;
}