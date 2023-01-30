#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Array.h"
#include "config.h"
int main()
{
    Array integers1( 7 );
    Array integers2;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nIntegers1's size is " << integers1.getSize() << endl;
    cout << "After initialization array is:\n" << integers1;
    cout << "\nIntegers2's size is " << integers2.getSize() << endl;
    cout << "After initialization array is:\n" << integers2;
    return 0;
}