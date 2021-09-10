#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H
#include <string>
using namespace std;
#include "Employee.h"
class ComissionEmployee : public Employee
{
public:
    ComissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
    virtual ~ComissionEmployee();
    void setGrossSales(double);
    double getGrossSales() const;
    void setComissionRate(double);
    double getComissionRate() const;
    virtual double earnings() const;
    virtual void print() const;
private:
    double grossSales;
    double comissionRate;
};
#endif