#include "lib.h"
#include "config.h"
#include<iostream>
using std::cout;
using std::endl;
namespace example
{
    int makeSomeSuperJob()
    {
        cout << "Hello from library.\n";
        return 42;
    }
    int getVersion()
    {
        return(PROJECT_VERSION);
    }
}