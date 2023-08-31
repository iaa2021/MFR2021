#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nExersise 21.30, ASCII symbols.\n";
    for (int i = 0; i < 255; i++)
    {
        cout << static_cast<char>( i ) << ", ";
        if( ( i + 1 ) % 10 == 0 )
        cout << endl;
    }
    return 0;
}