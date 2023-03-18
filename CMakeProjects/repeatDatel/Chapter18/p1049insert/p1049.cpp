#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "config.h"
int main()
{
    cout << "\nProject version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH)<< endl;
    string string1( "beginning end" );
    string string2( "middle " );
    string string3(  "2345678" );
    string string4( "xx" );
    cout << "Initial strings:\nstringl: " << string1;
    cout << "\nstring2: " << string2 << "\nstring3: " << string3;
    cout << "\nstring4: " << string4 << "\n\n";
    // insert "middle" in string1 to 10's position
    string1.insert( 10, string2 );
    // insert "xx" to string3 to З's position
    //last 2 arguments specify first and last elements of string4 
    // of those to be inserted.
    string3.insert( 3, string4, 0, string::npos );
    cout << "Strings after insert:\nstring1: " << string1;
    cout << "\nstring2: " << string2 << "\nstring3: " << string3;
    cout << "\nstring4: " << string4 << endl;
    cout << "Example contents iterators.\n";
    string1 = "Testing iterators";
    string::const_iterator it = string1.begin();
    cout << "string1 = " << string1;
    cout << "\n(Using iterator it) string1 is: ";
    while ( it != string1.end() )
    {
        cout << *it;
        it++;
    }
    cout << "\n\nPassing string1 in reverse order.\n";
    string::const_reverse_iterator it1 = string1.rbegin();
    while ( it1 != string1.rend() )
    {
        cout << *it1;
        it1++;
    }
    cout << endl;
    return 0;
}