#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
struct Part
{
    int partNumber;
    char partName[ 25 ];
};
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.3\n";
    typedef Part* patrPtr;
    Part a;
    Part b[ 10 ];
    Part *ptr;
    cout << "Input detail's number and name:\n";
    cin >> a.partNumber >> a.partName;
    b[ 3 ] = a;
    ptr = b;
    cout << "\nDetail's number and name:\n";
    cout << ptr[ 3 ].partNumber << ' ' << ptr[ 3 ].partName << endl;
    return 0;
}
