#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <algorithm>
using std::copy;

int main()
{
    string text( "Testing iterators" );
    string::iterator it = text.begin();
    while (it != text.end())
    {
        cout << *it;
        ++it;
    }
    cout << endl;
    string text1;
    copy( text.rbegin(), text.rend(), back_inserter(text1) );
    cout << text1 << endl;
    return 0;
}