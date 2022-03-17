#include <iostream>
using std::cout;
int main()
{
    cout << "According to isdigit " << ( isdigit( '8' )? " 8 is a " : " 8 is not a ") << " digit.\n";
    cout << "According to isdigit " << ( isdigit( '#' )? " # is a " : " # is not a ") << " digit.\n";
    cout << "According to isalpha " << ( isalpha( '8' )? " 8 is an " : " 8 is not an ") << " alpha.\n";
    cout << "According to isalpha " << ( isalpha( 'a' )? " a is an " : " a is not an ") << " alpha.\n";
    cout << "According to isalpha " << ( isalpha( '&' )? " & is an " : " & is not an ") << " alpha.\n";
    return 0;
}