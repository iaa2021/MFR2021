#include "SalariedEmployee.h"
#include <iostream>
using std::cout;
using std::endl;
SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
    : Employee(first, last, ssn)
{
    setWeeklySalary(salary);
}
void SalariedEmployee::setWeeklySalary(double salary)
{
    weeklySalary = (salary < 0 ? 0.0 : salary);
}
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}
void SalariedEmployee::print() const
{
    cout << "Salaried employee ";
    Employee::print();
    cout << "\nweeklySalary: " << getWeeklySalary() << endl;
}