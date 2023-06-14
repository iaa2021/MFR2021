#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <set>
using std::set;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <algorithm>
using std::copy;
#include <ctime>
using std::time;
#include <map>
#include "config.h"
typedef set <double, std::less<double> > doubleSet;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1245, set STL container:\n";
    ostream_iterator<double> it( cout, ", " );
    srand( time( 0 ) );
    double *array = new double[ 10 ];
    for (int i = 0; i < 10; i++)
    {
        array[ i ] = static_cast<double>(rand()% 500) / 100; 
    }
    cout << "\nArray contains:\n";
    copy( array, array + 10, it );
    doubleSet dSet( array, array + 10 );
    cout << "\nDouble set contains:\n";
    copy( dSet.begin(), dSet.end(), it );
    std::pair<doubleSet::const_iterator, bool> p; double value;
    cout << "\nInput value, you'd like to insert: ";
    cin >> value;
    p = dSet.insert( value );
    cout << "\nValue " << *( p.first) << ( p.second ? " was " : " was not " );
    cout << " inserted.\n";
    cout << "\nAfter insertion double set contains:\n";
    copy( dSet.begin(), dSet.end(), it );
    cout << endl;
    return 0;
}