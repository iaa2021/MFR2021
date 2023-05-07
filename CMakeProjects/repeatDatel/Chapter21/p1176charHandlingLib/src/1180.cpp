#include "config.h"
#include <iostream>
using std::cout;
using std::endl;
#include <cctype>
using std::iscntrl;
using std::isgraph;
using std::isprint;
using std::ispunct;
using std::isspace;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "According to isspace:\nNew line";
    cout << ( isspace( '\n' )? " is a " : " isn't a " );
    cout << "whitespace character\nHorizontal tab";
    cout << ( isspace( '\t' )? " is a " : " isn't a " );
    cout << "whitespace character.\n";
    cout << ( isspace( '%' )? "% is a " : "% isn't a " );
    cout << "whitespace character.\n";
    cout << ( isspace( '!' )? "! is a " : "! isn't a " );
    cout << "whitespace character.\n";
    cout << "\nAccording to iscntrl:\nNew line";
    cout << ( iscntrl( '\n' )? " is a " : " isn't a " );
    cout << "contral character\n";
    cout << ( iscntrl( '$' )? "$ is a " : "$ isn't a " );
    cout << "contral character.\n";
    cout << "\nAccording to ispunct:\n";
    cout << ( ispunct( ';' )? "; is a " : "; isn't a " );
    cout << "punctual character\n";
    cout << ( ispunct( 'Y' )? "Y is a " : "Y isn't a " );
    cout << "punctual character\n";
    cout << ( ispunct( '#' )? "# is a " : "# isn't a " );
    cout << "punctual character\n";
    cout << "\nAccording to isprint:\n";
    cout << ( isprint( '$' )? "$ is a " : "$ isn't a " );
    cout << "printing character\nAlert";
    cout << ( isprint( '\a' )? " is a " : " isn't a " );
    cout << "printing character\nSpace";
    cout << ( isprint( ' ' )? " is a " : " isn't a " );
    cout << "printing character\n";
    cout << "\nAccording to isgraph:\n";
    cout << ( isgraph( 'Q' )? "Q is a " : "Q isn't a " );
    cout << "printing character other than a space.\nSpace";
    cout << ( isgraph( ' ' )? " is a " : " isn't a " );
    cout << "printing character other than a space.\nSpace";
    return 0;
}