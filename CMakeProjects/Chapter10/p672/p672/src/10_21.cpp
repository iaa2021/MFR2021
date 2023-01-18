#include "p672.h"
#include "config.h"
#include <iostream>
using std::cout;
using std::endl;
int main()
{
	cout << "Number of employees before creating any objects: " << Employee::getCount() << endl;
	Employee* ptr1; ptr1 = new Employee("Susan", "Baker");
	Employee* ptr2; ptr2 = new Employee("John", "Smith");
	cout << "Number of employees after creating objects: " << ptr1 -> getCount() << endl;
	cout << "\nEmployee1 is " << ptr1->getFirstName() << ", " << ptr1->getLastName() << endl;
	cout << "\nEmployee2 is " << ptr2->getFirstName() << ", " << ptr2->getLastName() << endl;
	delete ptr1;
	ptr1 = 0;
	delete ptr2;
	ptr2 = 0;
	cout << "Number of employees after objects are deleted is : " << Employee::getCount() << endl;
	return 0;
}