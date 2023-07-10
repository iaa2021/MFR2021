#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include<algorithm>
using std::sort;
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <bits/stdc++.h>
using std::greater;
#include <string>
using std::string;
#include "config.h"
int main( int argc, char *argv[] )
{
    if( argc != 3 )
    cout << "Usage g2, arg1, arg2.\n";
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1371, sorting vector in:\n";
    cout << " descending, -d and ascending -a order.\n";
    srand( time( 0 ) );
    vector<int> v; ostream_iterator<int> it( cout, ", " );
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back( rand()%100 + 1 );
    }
    cout << "Vector contains: ";
    copy( v.begin(), v.end(), it );
    cout << "\nArgument1 is: " << argv[ 1 ] << endl;
    string choice = argv[ 1 ];
    if( choice == "-a" )
    {sort( v.begin(), v.end() );
    cout << "\nAfter sorting in ascending order vector contains:\n";
    copy( v.begin(), v.end(), it );}
    if( choice == "-d" )
    {sort( v.begin(), v.end(), greater<int>() );
    cout << "\nAfter sorting in descending order vector contains:\n";
    copy( v.begin(), v.end(), it );}
    cout << endl;
    return 0;
}