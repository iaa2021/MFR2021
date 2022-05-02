#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
using std::back_inserter;
#include <algorithm>

int main()
{
    const int Size = 10;
    int array1[ Size ] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
    vector<int>v(array1, array1 + Size);
    ostream_iterator<int> output( cout, ", " );
    cout << "Vector v contains: ";
    copy( v.begin(), v.end(), output );
    
    cout << endl;
    return 0;
}