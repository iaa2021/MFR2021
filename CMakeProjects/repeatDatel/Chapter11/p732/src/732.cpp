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
    cout << "\n\nd2 += 7 is " << ( d2 += 7 );
    d3.setDate( 2, 28, 1992 );
    cout << "\n\n d3 is " << d3;
    cout << "\n++d3 is " << ++d3 << " (leap year allows 29th)";
    Date d4( 7, 13, 2002 );
    cout << "\n\nTesting the prefix increment operator:\n";
    cout << " d4 is " << d4 << endl;
    cout << "++d4 is " << ++d4 << endl;
    cout << " d4 is " << d4;
    cout << "\n\nTesting the postfix increment operator:\n";
    cout << " d4 is " << d4 << endl;
    cout << "d4++ is " << d4++ << endl;
    cout << " d4 is " << d4 << endl;
    return 0;
}