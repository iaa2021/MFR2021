#include <iostream>
using std::cout;
using std::endl;
#include "Base1.h"
#include "Base2.h"
#include "Derived.h"

int main()
{
    Base1 base1( 10 ), *base1Ptr = 0;
    Base2 base2( 'Z' ), *base2Ptr = 0;
    Derived derived( 7, 'A', 3.5 );
    cout << "Object base1 contains integer: " << base1.getData() << endl;
    cout << "Object base2 contains character: " << base2.getData() << endl;
    cout << "Object derived contains:\n" << derived << endl;
    cout << "Data members of Derived can be accessed individually:\n";
    cout << "Integer: " << derived.Base1::getData() << endl;
    //cout << "Letter: " << derived.Base2::getData() << endl;
    cout << "Real number: " << derived.getReal() << endl;
    base1Ptr = &derived;
    cout << "base1Ptr -> getData() yields " << base1Ptr -> getData() << endl;
    //base2Ptr = &derived;
    //cout << "base2Ptr -> getData() yields " << base2Ptr -> getData() << endl;
    return 0;
}