#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "config.h"
union Number
{
    int i1;
    double d2;
};

int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of union.\n";
    cout << fixed << setprecision( 2 );
    Number value; int a; double b;
    cout << "Put a value in the integer member and print both members: "; 
    cin >> a; value.i1 = a;
    cout << "\nUnion contains int: " << value.i1 << " and double: " << value.d2 << endl;
    cout << "Put a value in the double member and print both members: ";
    cin >> b; value.d2 = b;
    cout << "\nUnion contains int: " << value.i1 << " and double: " << value.d2 << endl;
    return 0;
}