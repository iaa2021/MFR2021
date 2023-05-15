#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::memcmp;

#include <iomanip>
using std::setw;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nmemcmp demonstration:\n";
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYZ";
    cout << "s1 = " << s1 << "\ns2 = " << s2 << endl;
    cout << "\nmemcmp(s1, s2, 4) = " << setw( 3 ) << memcmp( s1, s2, 4 ) << endl;
    cout << "\nmemcmp(s1, s2, 7) = " << setw( 3 ) << memcmp( s1, s2, 7 ) << endl;
    cout << "\nmemcmp(s2, s1, 7) = " << setw( 3 ) << memcmp( s2, s1, 7 ) << endl;
    return 0;
}