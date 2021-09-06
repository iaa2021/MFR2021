#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using std::string;
class Employee
{
public:
    Employee(const string&, const string&, const string&);
    void setFirstName(const string&);
    string getFirstName() const;
    void setLastName(const string&);
    string getLastName() const;
    void setSocialSecurityNamber(const string&);
    string getSocialSecurityNamber() const;
    virtual double earnings() const = 0;
    virtual void print() const;

private:
    string firstName;
    string lastName;
    string sSN;
};
#endif
