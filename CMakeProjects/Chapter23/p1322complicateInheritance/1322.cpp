#include "Derived.h"
#include "Base1.h"
#include "Base2.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    Base1 base1( 10 ), *base1Ptr = 0;
    Base2 base2( 'Q' ), *base2Ptr = 0; Derived derived( 7, 'A', 12.33 );
    cout << "Object base1 contains: " << base1.getData() << "\nObject base2 contains: " << base2.getData() << endl;
    cout << "Object derived contains: " << derived << endl;
    cout << "Data members can be accessed individually:\n" << "Integer: " << base1.getData();
    cout << "\nCharacter: " << base2.getData() << "; Double: " << derived.getReal() << endl;
    base1Ptr = &derived;
    cout << "base1Ptr -> getData() yelds: " << base1Ptr -> getData() << endl;
    base2Ptr = &derived;
    cout << "base2Ptr -> getData() yelds: " << base2Ptr -> getData() << endl;
    cin.get();
    return 0;
}