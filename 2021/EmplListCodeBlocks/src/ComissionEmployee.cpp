#include <iostream>
using namespace std;
#include "ComissionEmployee.h"
ComissionEmployee::ComissionEmployee(const string& first, const string& last,
    const string& ssn, double sales, double rate)
    : Employee(first, last, ssn)
{
    setGrossSales(sales);
    setComissionRate(rate);
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
    cout << "Comission employee ";
    Employee::print();
    cout << "\ngross sales: "
        << getGrossSales() << "$" << "\ncomission rate: " << getComissionRate() * 100 << "%" << endl;

}

