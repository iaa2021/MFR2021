#include "config.h"
#include "lib.h"
using namespace example;
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    cout << "Hello from main." << endl;
    example::makeSomeSuperJob();
    cout << "Library's version: " << example::getVersion() << endl;
    cout << "Project  version is: " << (PROJECT_VERSION) << endl;
    return 0;
}