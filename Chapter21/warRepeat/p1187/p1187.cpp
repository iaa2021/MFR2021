#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strchr;
using std::strcspn;

int main()
{
    const char *string1 = "This is a test.";
    char character1 = 'a';
    char character2 = 'z';
    if( strchr( string1, character1 ) != 0 )
        cout << "\"" << character1 << "\" was found in \"" << string1 << "\"." << endl;
    else
        cout << "\"" << character1 << "\" was not found in \"" << string1 << "\"." << endl;
    
    if( strchr( string1, character2 ) != 0 )
        cout << "\"" << character2 << "\" was found in \"" << string1 << "\"." << endl;
    else
        cout << "\"" << character2 << "\" was not found in \"" << string1 << "\"." << endl;
    
    const char *string2 = "The value is 3.14159.";
    const char *string3 = "123456789";
    cout << "\nString2 = " << string2 << "\nString3 = " << string3;
    cout << "\n\nThe length of initial segment of string2 containing no characters from string3 is ";
    cout << strcspn( string2, string3 ) << endl;
    return 0;
}