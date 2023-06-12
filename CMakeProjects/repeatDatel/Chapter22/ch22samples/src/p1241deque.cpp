#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <deque>
using std::deque;
#include <iterator>
using std::ostream_iterator;
#include <stdexcept>
#include <algorithm>
using std::copy;
#include "config.h"

int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1241, deque STL container:\n";
    deque<double> values; ostream_iterator<double> it( cout, ", " );
    for (int i = 0; i < 10; i++)
    {
        if( i > 4 )
        values.push_back( static_cast<double>( i + 1 ) / static_cast<double>( i + 7 ) );
        else
        values.push_front( static_cast<double>( i + 1 ) / static_cast<double>( i + 7 ) );
    }
    cout << "Values contents:\n";
    cout << fixed << setprecision( 2 );
    for (auto it1 : values )
    {
        cout << it1 << ", ";
    }
    cout << endl;
    values.pop_front();
    cout << "After pop_front values contents:\n";
    copy( values.begin(), values.end(), it );
    size_t a; double b;
    cout << "\nInput position for modification: ";
    cin >> a;
    cout << "\nInput value for modification: ";
    cin >> b;
    values.at( a ) = b;
    cout << "After modification values contents:\n";
    copy( values.begin(), values.end(), it );
    cout << endl;
    return 0;
}