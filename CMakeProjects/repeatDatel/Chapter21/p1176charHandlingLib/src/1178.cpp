#include "config.h"
#include <iostream>
using std::cout;
using std::endl;
#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "According to islower:\n";
    cout << ( islower( 'p' )? "p is a " : "p isn't a " ) << "lowercase letter.\n";
    cout << ( islower( 'P' )? "# is a " : "P isn't a " ) << "lowercase letter.\n";
    cout << ( islower( '5' )? "5 is a " : "5 isn't a " ) << "lowercase letter.\n";
    cout << ( islower( '!' )? "! is a " : "! isn't a " ) << "lowercase letter.\n";
    cout << "According to isupper:\n";
    cout << ( isupper( 'd' )? "d is a " : "d isn't a " ) << "uppercase letter.\n";
    cout << ( isupper( 'D' )? "D is a " : "D isn't a " ) << "uppercase letter.\n";
    cout << ( isupper( '8' )? "8 is a " : "8 isn't a " ) << "uppercase letter.\n";
    cout << ( isupper( '$' )? "$ is a " : "$ isn't a " ) << "uppercase letter.\n";
    cout << "\nu converted to uppercase is: ";
    cout << static_cast< char >( toupper( 'u' ) );
    cout << "\n7 converted to uppercase is: ";
    cout << static_cast< char >( toupper( '7' ) );
    cout << "\n$ converted to uppercase is: ";
    cout << static_cast< char >( toupper( '$' ) );
    cout << "\nL converted to lowercase is: ";
    cout << static_cast< char >( tolower( 'L' ) ) << endl;
    return 0;
}