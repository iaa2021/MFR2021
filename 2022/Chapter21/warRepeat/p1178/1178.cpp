#include<iostream>
using std::cout;
#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;
int main()
{
    cout << "According to isupper " << ( isupper( 'D' )?"D is an ": "D is not an " ) << "uppercase letter.\n";
    cout << "According to isupper " << ( isupper( 'd' )?"d is an ": "d is not an " ) << "uppercase letter.\n";
    cout << "According to isupper " << ( isupper( '8' )?"8 is an ": "8 is not an " ) << "uppercase letter.\n";
    cout << "According to isupper " << ( isupper( '$' )?"$ is an ": "$ is not an " ) << "uppercase letter.\n";
    cout << "According to islower " << ( islower( 'D' )?"D is an ": "D is not an " ) << "lowercase letter.\n\n";
    cout << "According to islower " << ( islower( 'p' )?"p is a ": "p is not a " ) << "lowercase letter.\n";
    cout << "According to islower " << ( islower( '5' )?"5 is a ": "5 is not a " ) << "lowercase letter.\n";
    cout << "According to islower " << ( islower( '!' )?"! is a ": "! is not a " ) << "lowercase letter.\n\n";
    cout << "Converted to uppercase letter p is " << static_cast<char>( toupper( 'p' ) ) << ".\n";
    cout << "Converted to uppercase 7 is " << static_cast<char>( toupper( '7' ) ) << ".\n";
    cout << "Converted to uppercase $ is " << static_cast<char>( toupper( '$' ) ) << ".\n";
    cout << "Converted to lowercase letter A is " << static_cast<char>( tolower( 'A' ) ) << ".\n";
    return 0;
}