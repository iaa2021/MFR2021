#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::memcpy;

#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nmemcpy demonstration:\n";
    char s1[17];
    char s2[] = "Copy this string";
    memcpy( s1, s2, 17 );
    cout << "After s2 is copied into si with memepy,\n";
    cout << "s1 contains \"" << s1 << "\"" << endl;
    cout << "\nmemmove demonstration:\n";
    char x[] = "Home sweet Home";
    cout << "The string in array x before memmove is: " << x;
    cout << "\nThe string in array x after memmove is:\n";
    cout << static_cast<char *>( memmove( x, &x[ 5 ], 10 ) ) << endl;
    return 0;
}