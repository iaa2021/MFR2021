#include <iostream>
using std::cout;
using std::endl;
#include "Derived.h"
#include "base1.h"
#include "base2.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Library's version is ";
    Derived::printVersion();
    return 0;
}