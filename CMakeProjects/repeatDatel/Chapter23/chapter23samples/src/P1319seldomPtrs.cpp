#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
class Test
{
public:
    void test()
    {
        cout << "\nIn test function.\n";
    }
    int value;
};
void arrowStar( Test * );
void dotStar( Test * );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of .* and ->* options.\n";
    Test test;
    test.value = 8;
    arrowStar( &test );
    dotStar( &test );
    return 0;
}
void arrowStar( Test *testPtr )//access to function via ->*
{
    void( Test::*memPtr )() = &Test::test;
    (testPtr ->*memPtr)();
}
void dotStar( Test *testPtr1 )//access to function via .*
{
    int Test::*vPtr = &Test::value;
    cout << (*testPtr1).*vPtr << endl;
}