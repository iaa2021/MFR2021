#include "p672.h"
#include "config.h"
#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcpy;
int Employee::count = 0;
Employee::Employee(const char*first, const char*last)
{
	firstName = new char[strlen(first) + 1];
	strcpy(firstName, first);
	lastName = new char[strlen(last) + 1];
	strcpy(lastName, last);
	count++;
	cout << "Constructor for " << firstName << "  " << lastName << " called.\n";
}

Employee::~Employee()
{
	cout << "Desstructor for " << firstName << "  " << lastName << " called.\n";
	count--;
	delete [] firstName;
	delete [] lastName;
}

int Employee::getCount()
{
	return count;
}

const char* Employee::getFirstName() const
{
	return firstName;
}

const char* Employee::getLastName() const
{
	return lastName;
}

void Employee::getVersion() const
{
	cout << "\nLibrary version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}