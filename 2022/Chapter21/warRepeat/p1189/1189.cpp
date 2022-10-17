#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strrchr;
using std::strspn;
using std::strstr;

int main()
{
    const char *string1 = "A zoo has many animals including zebras.";
    char c = 'z';
    cout << "string1 = \"" <<  string1 << "\"" << endl;
    cout << "The reminder of the string1 beginning with the last occurrence of character '" << c;
    cout << "' is: \"" << strrchr( string1, c ) << "\"" << endl; 

    const char *string2 = "The value is 3.14159";
    const char *string3 = "aehils Tuv";
    cout << "string2 = \"" <<  string2 << "\"" << endl;
    cout << "string3 = \"" <<  string3 << "\"" << endl;
    cout << "The length of initial segment of string2\n";
    cout << "containing only characters from string3 = " << strspn( string2, string3 ) << endl;

    const char *string4 = "abcdefabcdef";
    const char *string5 = "def";
    cout << "string4 = \"" <<  string4 << "\"" << endl;
    cout << "string5 = \"" <<  string5 << "\"" << endl;
    cout << "The reminder of the string4 beginning with the first occurrence of string5 is\n";
    cout << strstr( string4, string5 ) << endl; 
    return 0;
}

