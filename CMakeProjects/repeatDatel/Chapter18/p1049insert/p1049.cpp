#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
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
    return 0;
}