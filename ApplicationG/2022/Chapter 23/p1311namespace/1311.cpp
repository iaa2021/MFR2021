#include <iostream>
using namespace std;
int integer1 = 98;
namespace Example
{
    double PI = 3.14159;
    double E = 2.71828;
    int integer1 = 8;
    void printValues();
    namespace Inner
    {
        enum Years  { FISCAL1 = 1990, FISCAL2, FISCAL3 };
    }
}
namespace
{
    double doubleInUnnamed = 88.22;
}
int main()
{
    cout << "doubleInUnnamed = " << doubleInUnnamed;
    cout << "\nglobal integer1 = " << integer1;
    cout << "\nPI = " << Example::PI << "\nE = " << Example::E << "\ninteger1 = " << Example::integer1;
    cout << "\nFISCAL3 = " << Example::Inner::FISCAL3; 
    Example::printValues();
    cout << endl;
    return 0;
} 
void Example::printValues()
{
    cout << "\nIn printValues: doubleInUnnamed = " << doubleInUnnamed;
    cout << "\nglobal integer1 = " << integer1;
    cout << "\nPI = " << PI << "\nE = " << E << "\ninteger1 = " << integer1;
    cout << "\nFISCAL2 = " << Inner::FISCAL2; 
}