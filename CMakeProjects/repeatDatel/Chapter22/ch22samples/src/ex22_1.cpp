#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include <string>
using std::string;
#include "config.h"
void pal( string );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1294, demo of accumulate.\n";
    ostream_iterator<int> it( cout, ", " ); int size = 10, result;
    string text;
    cout << "\nInput text: ";
    getline( cin, text );
    pal( text );
    return 0;
}
void pal( string text )
{
    int a = 0, k = text.size() - 1;
    for (int i = 0; i < text.size(); i++ )
    {
        if( text.at( i ) != text.at( k ) )
        {a++;}
        k--;
    }
    if( a == 0 )
    cout << text << " is palindrom.\n";
    else
    cout << text << " is not palindrom.\n";
}