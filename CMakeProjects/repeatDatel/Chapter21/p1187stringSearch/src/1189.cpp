#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strrchr;
using std::strspn;
using std::strstr;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of strrchr function.\n";
    const char *string1 = "A zoo has many animals including zebras"; 
    char c = 'z';
    cout << "string1 \"" << string1 << "\"\n";
    cout << "The reminder of string1 beginning with last occurance ";
    cout << "of character \'" << c << "\' is: \"" << strrchr( string1, c ) << "\"\n";
    cout << "\nDemonstration of strspn function.\n";
    const char *string2 = "The value is 3.14159"; 
    const char *string3 = "aehils Tuv" ; 
    cout << "\nstring2 = \"" << string2 << "\nstring3 = \"" << string3 << "\"\n";
    cout << "\n\nThe length of the initial segment of stringl\n"; 
    cout << "containing only characters from string2 = ";
    cout << strspn( string2, string3 ) << endl;
    cout << "\nDemonstration of strstr function.\n";
    const char *string4 = "abcdefabcdef"; 
    const char *string5 = "def"; 
    cout << "string4 = " << string4 << "\nstring5 = " << string5 << endl;
    cout << "\n\nThe remainder of stringl beginning with the\n"; 
    cout << "first occurrence of string2 is: ";
    cout << strstr( string4, string5 ) << endl;
    return 0;
}