#include <iostream>
using std::cout;
using std::endl;
#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isxdigit;
using std::isdigit;
int main()
{
    cout << "According to isdigit:\n" << ( isdigit( '8' )? "8 is a ": "8 is not a " ) << " digit.\n";
    cout << ( isdigit( '#' )? "# is a ": "# is not a " ) << " digit.\n";

    cout << "According to isalpha:\n" << ( isalpha( 'A' )? "A is a ": "A is not a " ) << " letter.\n";
    cout  << ( isalpha( 'b' )? "b is a ": "b is not a " ) << " letter.\n";
    cout << ( isalpha( '&' )? "& is a ": "& is not a " ) << " letter.\n";
    cout << ( isalpha( '4' )? "4 is a ": "4 is not a " ) << " letter.\n";

    cout << "According to isalnum:\n" << ( isalnum( 'A' )? "A is a ": "A is not a " ) << " digit or a letter.\n";
    cout << ( isalnum( '8' )? "8 is a ": "8 is not a " ) << " digit or a letter.\n";
    cout << ( isalnum( '#' )? "# is a ": "# is not a " ) << " digit or a letter.\n";

    cout << "According to isxdigit:\n" << ( isxdigit('8')? "8 is a ": "8 is not a " ) << " hexadecimal digit.\n";
    cout << ( isxdigit('F')? "F is a ": "F is not a " ) << " hexadecimal digit.\n";
    cout << ( isxdigit('f')? "f is a ": "f is not a " ) << " hexadecimal digit.\n";
    cout << ( isxdigit('$')? "$ is a ": "$ is not a " ) << " hexadecimal digit.\n";
    return 0;
}