#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
using std::strcmp;
using std::strlen;
#include <iterator>
using std::ostream_iterator;
#include <cctype>
using std::toupper;
#include "config.h"
const char *maximun( const char *, const char * );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1309, using const_cast:\n";
    char s1[] = "hello";
    char s2[] = "good bye";
    char *maxPtr = const_cast<char *>( maximun( s1, s2 ) );
    cout << "\nThe larger string is: " << maxPtr << endl;
    for (size_t i = 0; i < strlen(maxPtr); i++)
    {
        maxPtr[ i ] = toupper( maxPtr[ i ] );
    }
    cout << "\nLarger string capitalased is:\n" << maxPtr << endl;
    return 0;
}
const char *maximun( const char *first, const char *second )
{
    return ( strcmp( first, second ) > 0 ? first : second );
}