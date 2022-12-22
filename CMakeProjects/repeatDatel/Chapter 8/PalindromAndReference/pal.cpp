#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strcmp;
using std::strcpy;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
#include "config.h"
int main()
{
    vector <char>v, v1;
    ostream_iterator<char> it( cout, "" );
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    string text, text1; int value = 0;
    cout << "Input text:\n";
    getline( cin, text );
    cout << "Text is: " << text << endl;
    for (size_t i = 0; i < text.size(); i++)
    {
        v.push_back( text.at( i ) );
    }
    for( int i = 0; i < v.size(); i++ )
    {
        if( v.at( i ) != v.at( v.size() - 1 - i ) )
        value = 1;
    }
    if( value == 1 )
    cout << "Text is not palindrom.\n";
    else
    cout << "Text is palindrom.\n";
    return 0;
}