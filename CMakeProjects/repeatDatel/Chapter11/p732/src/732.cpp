#include <iostream>
using std::endl;
using std::cout;
#include "config.h"
#include "Date.h"
int main()
{
    cout << "\nProject version is: " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    Date d1; // by default 1 janiary 1900
    Date d2( 12, 27, 1992 ); // 27 janiary 1992
    Date d3( 0, 99, 8045 );
    d1.getVersion();
    cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
    cout << "\n\nd1 += 7 is " << ( d1 += 7 );
    return 0;
}