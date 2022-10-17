#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <algorithm>// algorithm copy
#include <iterator>// ostream_iterator
#include <stdexcept>// out_of_range
int main()
{
    const int Size = 6;
    int array[Size] = { 1, 2, 3, 4, 5, 6 };
    vector <int> integers ( array, array + Size );
    std::ostream_iterator <int> output( cout, ", " );
    cout << "Vector integers contains:\n";
    std::copy( integers.begin(), integers.end(), output );
    cout << "\nFirst element of integers is " << integers.front();
    cout << "\nLast element of integers is " << integers.back();
    integers.at(0) = 7;
    integers.at(2) = 10;
    cout << "\nVector integers after installing first and third elements respectively to 7 & 10  contains:\n";
    std::copy( integers.begin(), integers.end(), output );
    integers.insert( integers.begin() + 1, 22 );
    cout << "\nVector integers after inserting in second position 22 contains:\n";
    std::copy( integers.begin(), integers.end(), output );
    cout << "\nAttempt to invoke vector's element out of range.\n";
    try
    {
        integers.at( 100 ) = 777;
    }
    catch( std::out_of_range oOR )
    {
        cout << "\nException:" << oOR.what() << '\n';
    }
    cout << "\nErasing first element.\n";
    integers.erase( integers.begin() );
    cout << "\nVector integers after erasing first element contains:\n";
    std::copy( integers.begin(), integers.end(), output );
    cout << "\nErasing remaining elements.\n";
    integers.erase( integers.begin(), integers.end() );
    cout << "\nVector integers after erasing remaining elements ";
    cout << ( integers.empty()? "is ": "is not " ) << "empty.\n";
    cout << "\nInserting elements from array.\n";
    integers.insert( integers.begin(), array, array + Size );
    cout << "\nVector integers after inserting elements contains:\n";
    std::copy( integers.begin(), integers.end(), output );
    integers.clear();
    cout << "\nVector integers after clearing all elements ";
    cout << ( integers.empty()? "is ": "is not " ) << "empty.\n";
    cout << endl;
    return 0;
}