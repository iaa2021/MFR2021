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
int main()
{
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
    cout << endl;
    return 0;
}