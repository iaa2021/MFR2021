#include <iostream>
using std::cout;
using std::endl;
using std::right;
using std::left;
#include <iomanip>
using std::setw;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR);
    cout << "." << (PROJECT_VERSION_PATCH) << endl;
    int a = 0;
    while ( a <= 10 )
    {
        for (int i = 0; i < a; i++)
        {
            cout << '*';
        }
        cout << endl;
        a++;
    }
    cout << endl;
    a = 10;
    while ( a > 0 )
    {
        for (int i = 0; i < a; i++)
        {
            cout << '*';
        }
        cout << endl;
        a--;
    }
    cout << endl;
    a = 10;
    while ( a > 0 )
    {
        for (int i = 0; i < 11; i++)
        {
            if( i < a )
            cout << ' ';
            else
            cout << '*';
        }
        cout << endl;
        a--;
    }
    cout << endl;
    a = 10;
    while ( a > 0 )
    {
        for (int i = 0; i < 10; i++)
        {
            if( i < 10 - a )
            cout << ' ';
            else
            cout << '*';
        }
        cout << endl;
        a--;
    }
    return 0;
}