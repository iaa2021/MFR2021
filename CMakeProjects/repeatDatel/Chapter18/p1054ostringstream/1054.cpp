#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <sstream>
using std::ostringstream;
#include <string>
using std::string;
int main()
{
    string string1( "Output of several data types " );
    string string2( "to an ostringstream object:" );
    string string3( "\n double: " );
    string string4( "\n int: " );
    string string5( "\naddress of int: " );
    double double1 = 123.4567;
    int integer = 22;
    ostringstream outputString;
    outputString << string1 << string2 << string3 << double1 << string4 << integer;
    outputString << string5 << &integer;
    cout << "outputString's content is:\n" << outputString.str() << endl;
    cout << "outputString's content after adding new data is:\n";
    outputString << "\nAdding new content.\n";
    cout << outputString.str();
    return 0;
}