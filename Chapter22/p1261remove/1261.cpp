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
    cout << endl;
    return 0;
}