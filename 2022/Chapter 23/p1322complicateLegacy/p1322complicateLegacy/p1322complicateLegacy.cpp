#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Base1.h"
#include "Base2.h"
#include "Derived.h"
int main()
{
	Base1 base1(10), * base1Ptr = 0;
	Base2 base2('Z'), * base2Ptr = 0;
	Derived derived(7, 'A', 3.5);
	cout << "Object base1 contains: " << base1.getData() << endl;
	cout << "Object base2 contains: " << base2.getData() << endl;
	cout << "Object derived contains: " << derived << endl;
	cout << "\nMembers of derived object can be accessed individually:\n";
	cout << "integer: " << derived.Base1::getData() << "\ncharacter: " << derived.Base2::getData();
	cout << "\ndouble: " << derived.getReal() << endl;
	cout << "derived can be threated as any object class:\n";
	base1Ptr = &derived;
	cout << "\nbase1Ptr->getData() yeilds: " << base1Ptr->getData() << endl;
	base2Ptr = &derived;
	cout << "\nbase2Ptr->getData() yeilds: " << base2Ptr->getData() << endl;
	cin.get();
	return 0;
}


