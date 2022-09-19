#include "config.h"
#include "sumLib.h"
using namespace example;
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Hello from main.\n";
    cout << "Sum is: " << sum( 1, 3 );
    cout << "Library version: " << getVersion() << endl;
    cout << "Main version: " << ( PROJECT_VERSION) << endl;
    return 0;
}