#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1219, using ostream_iterator:\n";
    vector<int> v; int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        v.push_back( i + 1 );
    }
    for( auto it : v )
    { cout << it << ", "; }
    ostream_iterator< int > intIt( cout );
    for( auto it : v )
    { sum += it; }
    cout << "\nThe sum of vector's integers is: " << endl;
    *intIt = sum;
    cout << endl;
    return 0;
}