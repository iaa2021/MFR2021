#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::memcpy;
using std::memmove;

int main()
{
    char s1[ 17 ];
    char s2[] = "Copy this string";
    memcpy( s1, s2, 17 );
    cout << "After s2 is copied into s1 with memcpy,\n s1 contains \"" << s1 << "\"" << endl;

    char x[] = "Home sweet home";
    cout << "The string in array before memmove is: " << x;
    cout << "\nThe string in array after memmove is: " << static_cast<char *>( memmove( x, &x[ 5 ], 10 ) ) << endl;
    return 0;
}