#include <iostream>
using std::cout;
using std::endl;
#include "version.h"

int main()
{
    version v;
    cout << "Hello, world." << endl;
    cout << v.getVersion() << endl;
    return 0;
}