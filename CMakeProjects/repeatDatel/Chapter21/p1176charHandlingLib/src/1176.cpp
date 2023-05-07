#include "config.h"
#include <iostream>
using std::cout;
using std::endl;
#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::isxdigit;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "According to isdigit:\n";
    cout << ( isdigit( '8' )? "8 is a " : "8 isn't a " ) << "digit.\n";
    cout << ( isdigit( '#' )? "# is a " : "# isn't a " ) << "digit.\n";
    cout << "According to isalpha:\n";
    cout << ( isalpha( 'A' )? "A is a " : "A isn't a " ) << "letter.\n";
    cout << ( isalpha( 'b' )? "b is a " : "b isn't a " ) << "letter.\n";
    cout << ( isalpha( '&' )? "& is a " : "& isn't a " ) << "letter.\n";
    cout << ( isalpha( '7' )? "7 is a " : "7 isn't a " ) << "letter.\n";
    cout << "According to isalnum:\n";
    cout << ( isalnum( 'A' )? "A is a " : "A isn't a " ) << "digit or letter.\n";
    cout << ( isalnum( 'b' )? "b is a " : "b isn't a " ) << "digit or letter.\n";
    cout << ( isalnum( '#' )? "& is a " : "# isn't a " ) << "digit or letter.\n";
    cout << ( isalnum( '7' )? "7 is a " : "7 isn't a " ) << "digit or letter.\n";
    cout << "According to isxdigit:\n";
    cout << ( isxdigit( 'F' )? "F is a " : "F isn't a " ) << "16x digit.\n";
    cout << ( isxdigit( '#' )? "# is a " : "# isn't a " ) << "16x digit.\n";
    cout << ( isxdigit( '7' )? "7 is a " : "7 isn't a " ) << "16x digit.\n";
    cout << ( isxdigit( '$' )? "$ is a " : "$ isn't a " ) << "16x digit.\n";
    cout << ( isxdigit( 'f' )? "f is a " : "f isn't a " ) << "16x digit.\n";
    cout << ( isxdigit( 'J' )? "J is a " : "J isn't a " ) << "16x digit.\n";
    return 0;
}