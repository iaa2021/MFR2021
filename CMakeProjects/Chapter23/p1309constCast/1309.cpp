#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstring>
using std::strcmp;
using std::strlen;
#include <cctype>
using std::toupper;
const char *maximum( const char *, const char * );
int main()
{
    char s1[] = "Hello";
    char s2[] = "Good bye";
    char *max = const_cast<char *>( maximum( s1, s2 ) );
    cout << "Maximum of these two arrays " << s1 << " and " << s2 << "\nis " << max << endl;
    cin.get();
    return 0;
}
const char *maximum(  const char *first, const char *second ) 
{
    return ( strcmp( first, second )? first : second );
}