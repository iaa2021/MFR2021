#include <iostream>
using std::cout;
using std::endl;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    cout << "Painting rhombus.\n";
    for (int i = 3; i < 20; i++)
    {
        if( i % 2 != 0 )
        {
            cout << "Rhombus with size " << i << endl;
            for (int j = 0; j < i; j++)
            {
                for (int k = 0; k < i; k++)
                {
                    if( j <=  ( i - 1 ) / 2  )
                    {
                        if( k >= ( ( i - 1 ) / 2 ) - j && k <= ( ( i - 1 ) / 2 ) + j )
                        cout << '*';
                        else 
                        cout << ' ';
                    }
                    else
                    {
                        if( k >= ( j - ( i - 1 ) / 2 ) && k <= ( ( i - 1 - ( j - ( i - 1 ) / 2 ) ) ) ) 
                        cout << '*';
                        else 
                        cout << ' ';
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}