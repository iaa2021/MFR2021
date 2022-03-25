#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <cstring>
using std::memcpy;
using std::memmove;
using std::memcmp;
using std::memchr;
using std::memset;

int main()
{
    char s1[ 17 ];
    char s2[] = "Copy this string";
    memcpy( s1, s2, 17 );
    cout << "After s2 is copied into s1 with memcpy,\n s1 contains \"" << s1 << "\"" << endl;

    char x[] = "Home sweet home";
    cout << "The string in array before memmove is: " << x;
    cout << "\nThe string in array after memmove is: ";
    cout << static_cast<char *>( memmove( x, &x[ 5 ], 10 ) ) << endl;

    char s3[] = "ABCDEFG";
    char s4[] = "ABCDXYZ";
    cout << "s3 = " << s3 << "\ns4 = " << s4 << endl;
    cout << "memcmp( s3, s4, 4 ) = " << memcmp( s3, s4, 4 ) << "\nmemcmp( s3, s4, 7 ) = " << memcmp( s3, s4, 7 );
    cout << "\nmemcmp( s4, s3, 7 ) = " << memcmp( s4, s3, 7 ) << endl;

    char s5[] = "This is a string";
    cout << "\ns5 = " << s5 << endl;
    cout << "The reminder of s5 after character 'r' is found is ";
    cout << static_cast<char*>( memchr( s5, 'r', 16 ) ) << endl;

    char string1[] = "BBBBBBBBBBBBBBB";
    cout << "string1 = " << string1 << endl;
    cout << "string1 after memset = " << static_cast<char *>( memset( string1, 'x', 7 ) ) << endl;
    return 0;
}