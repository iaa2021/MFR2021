#include <iostream>
using std::cout;
using std::endl;
#include "version.h"

#include "config.h"
int getVersion1()
{
    return (PROJECT_VERSION);
}
int main()
{
    version v;
    cout << "Hello, world.\n";
    cout << "Project version is: " << getVersion1() << endl;
    return 0;
}
