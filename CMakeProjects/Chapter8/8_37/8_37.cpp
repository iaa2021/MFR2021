#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strcmp;
using std::strtok;
using std::strcpy;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
using std::sort;
#include <iterator>
using std::ostream_iterator;
#include <cctype>
using std::tolower;
#include <map>
using std::map;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    string text; vector <string> v;
    cout << "Input city's names in list:\n";
    getline( cin, text );
    char *ptr = new char[ text.size() ];
    ptr = strcpy( ptr, text.data() );
    char *ptr1 = strtok( ptr, " ,.-" );
    while ( ptr1 != NULL )
    {
        v.push_back( ptr1 );
        ptr1 = strtok( NULL, " ,.-" );
    }
    ostream_iterator<string> it( cout, " " );
    cout << "\nVector is:\n";
    copy( v.begin(), v.end(), it );
    sort( v.begin(), v.end() );
    cout << "\nSorted vector is:\n";
    copy( v.begin(), v.end(), it );
    cout << endl << "Now handling ex8.41.\n";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map <char, int>frequency;
    int count = 0;
    for (size_t i = 0; i < alphabet.size(); i++)
    {
        for (size_t j = 0; j < text.size(); j++)
        {
            if( alphabet.at( i ) == text.at( j ) )
            count++;  
        }
        frequency.insert( { alphabet.at( i ), count } ) ;
        count = 0;
    }
    cout << "\nLetter frequency is:\n";
    for( auto item : frequency )
    {
        cout << item.first << "  " << item.second << endl;
    }
    return 0;
}