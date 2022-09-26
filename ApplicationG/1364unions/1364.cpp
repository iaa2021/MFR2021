#include <iostream>
using std::cout;
using std::endl;
#include "config.h"
union Number
{
    int i1;
    double d1;
};
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) <<endl;
    Number value;
    value.i1 = 100;
    cout << "Put a value into the int value and print both union's objects,\nint: ";
    cout << value.i1 << "\ndouble: " << value.d1 << endl;
    value.d1 = 33.33;
    cout << "Put a value into the double value and print both union's objects,\nint: ";
    cout << value.i1 << "\ndouble: " << value.d1 << endl;
    return 0;
}