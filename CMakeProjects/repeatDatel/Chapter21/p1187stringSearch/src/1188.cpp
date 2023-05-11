#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strpbrk;
using std::strcspn;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of strcspn function.\n";
    const char *string1 = "The value is 3.14159"; 
    const char *string2 = "1234567890"; 
    cout << "string1 = " << string1 << "\nstring2 = " << string2; 
    cout << "\n\nThe length of the initial segment of stringl"; 
    cout << "\ncontaining no characters from string2 = ";
    cout << strcspn( string1, string2 );
    cout << "\nDemonstration of strpbrk function.\n";
    const char *string3 = "This is a test."; 
    const char *string4 = "beware";
    cout << "Of the characters in \"" << string4 << "\" \'";
    cout << *strpbrk(string3, string4 );
    cout << "\' is a first character to appeare in \"" << string3 << "\".\n"; 
    return 0;
}