#include "sumLib.h"
#include "config.h"
#include <iostream>
using std::cout;
using std::endl;

namespace example
{
    int getVersion()
    {
        cout << "Hello from sumLib.\n";
        return (PROJECT_VERSION);
    }
    int sum( int a, int b )
    {
        return a + b;
    }
}