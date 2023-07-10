#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
int main( int argc, char *argv[] )
{
    if( argc != 3 )
    cout << "Usage g2, arg1, arg2.\n";
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1371, output of command line's args:\n";
    cout << "\nArgument1 is: " << argv[ 1 ] << ",argument2 is: " << argv[ 2 ] << endl;
    return 0;
}