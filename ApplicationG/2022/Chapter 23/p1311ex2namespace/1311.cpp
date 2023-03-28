#include <iostream>
using std::cout;
using std::endl;

int integer1 = 188;
namespace example
{
    const double pi = 3.14159;
    const double e = 2.71828;
    int integer2 = 8;

    void printValues();

    namespace Inner
    {
        enum Years { FISCALL1 = 1990, FISCALL2, FISCALL3 };
    }
}
namespace
{
    double dInUnnamed = 88.22;
}
using namespace example;
int main()
{
    cout <<"In main integer2 = " << integer2 << "\npi = " << pi << "\ne = " << e << endl;
    cout << "Global integer1 = " << integer1 << endl;
    cout << "dInUnnamed = " << dInUnnamed << "\nFISCALL3 = " << Inner::FISCALL3 << endl;
    printValues();
    return 0;
}
void example::printValues()
{
    cout << "\nIn printValues integer1 = " << integer1 << "\npi = " << pi << "\ne = " << e << endl;
    cout << "Global integer1 = " << ::integer1 << endl;
    cout << "dInUnnamed = " << dInUnnamed << "\nFISCALL3 = " << Inner::FISCALL3 << endl;
}