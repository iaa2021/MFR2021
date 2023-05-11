#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strchr;
#include "config.h"
void findChar( const char *, int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of strchr function.\n";
    const char *string1 = "This is a test"; 
    char character1 = 'a';
    char character2 = 'z';
    findChar( string1, character1 );
    findChar( string1, character2 );
    return 0;
}
void findChar( const char *s, int c )
{
    if( strchr( s, c ) != NULL )
    cout << "Character " << static_cast<char>(c) << " was found in string " << s << endl;
    else
    cout << "Character " << static_cast<char>(c) << " was not found in string " << s << endl;
}