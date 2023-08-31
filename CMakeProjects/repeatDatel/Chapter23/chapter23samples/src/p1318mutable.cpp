#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
class testMutable
{
public:
    testMutable(int = 0 );
    int getValue() const;
private:
mutable int value;
};

testMutable::testMutable( int v )
{
    value = v;
}

int testMutable::getValue() const
{
    return value++;
}

int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of mutable.\n";
    const testMutable test( 99 );
    cout << "Initial value " << test.getValue();
    cout << "\nModified value = " << test.getValue() << endl;
    return 0;
}