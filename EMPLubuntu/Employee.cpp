#include <iostream>
using std::cout;
using std::endl;
#include "Employee.h"
Employee::Employee(const string& first, const string& last,
    const string& ssn)
    : firstName(first), lastName(last), sSN(ssn)
{

}

void Employee::setFirstName(const string& first)
{
    firstName = first;
}
string Employee::getFirstName() const
{
    return firstName;
}
void Employee::setLastName(const string& last)
{
    lastName = last;
}
string Employee::getLastName() const
{
    return lastName;
}
void Employee::setSocialSecurityNamber(const string& ssn)
{
    sSN = ssn;
}
string Employee::getSocialSecurityNamber() const
{
    return sSN;
}
void Employee::print() const
{
    cout << getFirstName() << "  " << getLastName()
        << "\nsocial security number: " << getSocialSecurityNamber() << endl;
}