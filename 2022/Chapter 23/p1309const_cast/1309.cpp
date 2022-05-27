#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcmp;
#include <cctype>
using std::toupper;
const char *maximum( const char *first, const char *second )
{
    return ( strcmp( first, second ) >= 0 ? first : second );
}
int main()
{
    char s1[] = "Hello";
    char s2[] = "Good bye";
    char *maxPtr = const_cast< char * >( maximum( s1, s2 ) );
    cout << s1 << "  " << s2 << endl;
    cout << "The maximum char array from these two is:\n" << maxPtr << endl;
    return 0;
}