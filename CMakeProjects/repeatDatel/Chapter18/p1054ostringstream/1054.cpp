#include <iostream> 
using std::cout; 
using std::endl; 
using std::ios;
#include <string> 
using std::string;
#include<fstream>
using std::ofstream;
#include <sstream>
using std::ostringstream;
using std::istringstream;
int main()
{
    ofstream outFile( "text.txt", ios::out );
    ostringstream outputString;
    string string1( "Output of several data types " ); 
    string string2( "to an ostringstream object:" ); 
    string string3( "\n double: " ); 
    string string4( "\n int: " ); 
    string string5( "\naddress of int: " ); 
    int integer = 22; double double1 = 123.456;
    outputString << string1 << string2 << string3 << double1;
    outputString << string4  << integer << string5 << &integer;
    cout << "\noutputString contains:\n" << outputString.str() << endl;
    cout << "\noutputString after adding new data:\n";
    outputString << "\nmore characters added"; 
    cout << outputString.str() << endl;
    outFile << outputString.str();
    return 0;
} 
