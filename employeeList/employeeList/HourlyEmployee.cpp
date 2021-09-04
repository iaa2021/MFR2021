#include "HourlyEmployee.h"
#include <iostream>
using std::cout;
using std::endl;

HourlyEmployee::HourlyEmployee(const string& first, const string& last, const string& ssn, double hourlyWage, double workedHours)
    : Employee(first, last, ssn)
{
    setWage(hourlyWage);
    setHours(workedHours);
}
void HourlyEmployee::setWage(double hourlyWage)
{
    wage = (hourlyWage < 0 ? 0.0 : hourlyWage);
}
double HourlyEmployee::getWage() const
{
    return wage;
}
void HourlyEmployee::setHours(double workedHours)
{
    hours = ((workedHours >= 0.0) && (workedHours <= 168.0) ? workedHours : 0.0);
}
double HourlyEmployee::getHours() const
{
    return hours;
}
double HourlyEmployee::earnings() const
{
    if (getHours() <= 40)
        return getHours() * getWage();
    else
        return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
}
void HourlyEmployee::print() const
{
    cout << "Hourly employee ";
    Employee::print();
    cout << "\nhourly wage: " << getWage() << "\nhours worked: " << getHours() << endl;
}
