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
using std::multimap;
#include "config.h"
#include <string>
using std:: string;
typedef multimap <string, int, std::less<string> > mMap;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1247, multimap STL container:\n";
    mMap multMap;
    multMap.insert( mMap::value_type( "Oslo", 2578 ) );
    multMap.insert( mMap::value_type( "Amsterdam", 3725 ) );
    multMap.insert( mMap::value_type( "Berlin", 1739 ) );
    cout << "\nMultimap contains:\n";
    for( auto &it : multMap )
    { cout << it.first << '\t' << it.second << endl; }
    cout << "\nChanging data for Amsterdam, input value:\n";
    int value; cin >> value;
    for( auto &it : multMap )
    {
        if( it.first == "Amsterdam" )
        it.second = value;
    }
    cout << "\nMultimap contains:\n";
    for( auto &it : multMap )
    cout << it.first << '\t' << it.second << endl;
    cout << "Insert one more data for Berlin:\n";
    multMap.insert( mMap::value_type( "Berlin", 5731 ) );
    cout << "\nMultimap contains:\n";
    for( auto &it : multMap )
    cout << it.first << '\t' << it.second << endl;
    string city;
    cout << "Input city name and value to insert:\n";
    cin >> city >> value;
    multMap.insert( mMap::value_type( city, value ) );
    cout << "\nMultimap contains:\n";
    for( auto &it : multMap )
    cout << it.first << '\t' << it.second << endl;
    cout << "Input city name, you'd like to count in multimap:\n";
    cin >> city;
    cout << city << " occurs " << multMap.count( city ) << " times.\n";
    return 0;
}