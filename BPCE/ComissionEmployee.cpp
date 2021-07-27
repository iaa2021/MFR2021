#include <iostream>
using namespace std;
#include "ComissionEmployee.h"
ComissionEmployee::ComissionEmployee(const string& first, const string& last,
    const string& ssn, double sales, double rate)
    : firstName(first), lastName(last), sSN(ssn)
{
    setGrossSales(sales);
    setComissionRate(rate);
}
void ComissionEmployee::setFirstName(const string& first)
{
    firstName = first;
}
string ComissionEmployee::getFirstName() const
{
    return firstName;
}
void ComissionEmployee::setLastName(const string& last)
{
    lastName = last;
}
string ComissionEmployee::getLastName() const
{
    return lastName;
}
void ComissionEmployee::setSocialSecurityNamber(const string& ssn)
{
    sSN = ssn;
}
string ComissionEmployee::getSocialSecurityNamber() const
{
    return sSN;
}
void ComissionEmployee::setGrossSales(double sales)
{
    grossSales = (sales < 0 ? 0.0 : sales);
}
double ComissionEmployee::getGrossSales() const
{
    return grossSales;
}
void ComissionEmployee::setComissionRate(double rate)
{
    comissionRate = (rate < 0 ? 0.0 : rate);
}
double ComissionEmployee::getComissionRate() const
{
    return comissionRate;
}
double ComissionEmployee::earnings() const
{
    return comissionRate * grossSales;
}
void ComissionEmployee::print() const
{
    cout << "Comission employee " << firstName << "  " << lastName
        << "\nsocial security number: " << sSN << "\ngross sales: "
        << grossSales << "\ncomission rate: " << comissionRate << endl;

}
