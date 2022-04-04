#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cctype>
using std::tolower;
using std::toupper;
int main()
{
    size_t n = 100;
    char s[ n ];
    char c;
    cout << "Input sentense:\n "; 
    cin.getline( s, n );
    cout << "\nOutput in upper case:\n";
    for( size_t i = 0; i < n; i++ )
    {
        c = s[i];
        if( c == '!' || c == '?' || c == '.' )
        {
            putchar(toupper( c ));
            break;
        }
        else
        putchar(toupper( c ));
    }
    cout << "\nOutput in lower case:\n";
    for( size_t i = 0; i < n; i++ )
    {
        c = s[i];
        if( c == '!' || c == '?' || c == '.' )
        {
            putchar(tolower( c ));
            break;
        }
        else
        putchar(tolower( c ));
    }
    return 0;
}