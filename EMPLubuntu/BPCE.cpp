#include <iostream>
using namespace std;
#include "BPCE.h"
BPCE::BPCE(const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
    :ComissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}
BPCE::~BPCE()
{
    
}
void BPCE::setBaseSalary(double salary)
{
    baseSalary = (salary >= 0.0 ? salary : 0.0);
}
double BPCE::getBaseSalary() const
{
    return baseSalary;
}
double BPCE::earnings() const
{
    return getBaseSalary() + ComissionEmployee::earnings();
}
void BPCE::print() const
{
    cout << "Base plus ";
    ComissionEmployee::print();
    cout << "\nbase salary: " << getBaseSalary() << endl;
}