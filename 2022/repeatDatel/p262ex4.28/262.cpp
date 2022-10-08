#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR);
    cout << "." << PROJECT_VERSION_PATCH << endl;
    int row = 8;
    int column;
    while( row > 0 )
    {
        column = 1;
        while( column < 17 )
        {
            if( row % 2 == 0 )
            cout << ( column % 2 ? '*' : ' ' );
            else
            cout << ( column % 2 ? ' ' : '*' );

            column++;
        }
        row--;
        cout << endl;
    }
    return 0;
}