#include <iostream>
using std::cout;
using std::endl;
#include "Derived.h"
#include "base1.h"
#include "base2.h"
#include "config.h"
#include "config1.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Derived::printVersion();
    base1 b1( 10 ), *b1ptr = 0; 
    base2 b2( 'Z' ), *b2ptr = 0;
    Derived der( 7, 'A', 3.5 );
    cout << "\nObject b1 contains integer " << b1.getData();
    cout << "\nObject b2 contains character " << b2.getData();
    cout << "\nObject der contains: " << der << endl;
    cout << "Data members of Derived can be accessed individually:\n";
    cout << "Integer: " << der.base1::getData();
    cout << ", character: " << der.base2::getData();
    cout << ", real double: " << der.getReal() << endl;
    cout << "Regard der as an object of b1 type: ";
    b1ptr = &der;
    cout << b1ptr ->getData() << endl;  
    cout << "Regard der as an object of b2 type: ";
    b2ptr = &der;
    cout << b2ptr ->getData() << endl;  
    return 0;
}