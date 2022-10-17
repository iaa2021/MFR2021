#include <iostream>
using std::cout;
int main()
{
    cout << "According to isdigit " << ( isdigit( '8' )? " 8 is a " : " 8 is not a ") << " digit.\n";
    cout << "According to isdigit " << ( isdigit( '#' )? " # is a " : " # is not a ") << " digit.\n";
    cout << "According to isalpha " << ( isalpha( '8' )? " 8 is a " : " 8 is not a ") << " letter.\n";
    cout << "According to isalpha " << ( isalpha( 'a' )? " a is a " : " a is not a") << " letter.\n";
    cout << "According to isalpha " << ( isalpha( '&' )? " & is a " : " & is not a ") << " letter.\n";
    cout << "According to isalnum " << ( isalnum( 'A' )? "A is a " : " A is not a ") << "digit or a letter.\n";
    cout << "According to isalnum " << ( isalnum( '8' )? "8 is a " : " 8 is not a ") << "digit or a letter.\n";
    cout << "According to isalnum " << ( isalnum( '#' )? "# is a " : " # is not a ") << "digit or a letter.\n";
    cout << "According to isxdigit " << ( isxdigit( 'F' )? "F is a " : " F is not a ") << "hexadecimal digit.\n";
    cout << "According to isxdigit " << ( isxdigit( 'J' )? "J is a " : " J is not a ") << "hexadecimal digit.\n";
    cout << "According to isxdigit " << ( isxdigit( '7' )? "7 is a " : " 7 is not a ") << "hexadecimal digit.\n";
    cout << "According to isxdigit " << ( isxdigit( '$' )? "$ is a " : " $ is not a ") << "hexadecimal digit.\n";
    cout << "According to isxdigit " << ( isxdigit( 'f' )? "f is a " : " f is not a ") << "hexadecimal digit.\n";
    return 0;
}