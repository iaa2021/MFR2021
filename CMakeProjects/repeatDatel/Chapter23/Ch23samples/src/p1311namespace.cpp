#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int integer = 98;//global integer
namespace Example
{
    const double PI = 3.14159;
    const double E = 2.71828;
    int integer1 = 8;
    void printValues();
    namespace Inner
    {
        enum Years { FISCALl = 1990, FISCAL2, FISCAL3 };
    }
}
namespace
{
    double doubleInUnnamed = 88.22;
}
#include "config.h"
const char *maximun( const char *, const char * );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1311, using namespace:\n";
    cout << "doubleInUnnamed = " << doubleInUnnamed << endl;
    cout << "\n(global) integer = " << integer;
    cout << "\nInput Example's content:\n";
    cout << "integer1 = " << Example::integer1 << "\nPI = " << Example::PI;
    cout << "\nE = " << Example::E <<  "\nFISCAL3 = " << Example::Inner::FISCAL3;
    cout << endl;
    Example::printValues();
    return 0;
}
void Example::printValues()
{
    cout << "\nIn printValues: \ninteger1 = " << integer1 << "\nPI = ";
    cout << PI << "\nE = " << E << "\ndoubleInUnnamed = ";
    cout << doubleInUnnamed << "\n(global) integer = " << ::integer;
    cout << "\nFISCAL3 = " << Inner:: FISCAL3 << endl;
}