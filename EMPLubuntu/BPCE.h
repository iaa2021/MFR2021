#ifndef BPCE_H
#define BPCE_H
#include <string>
using namespace std;
#include "ComissionEmployee.h"
class BPCE : public ComissionEmployee
{
public:
    BPCE(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;
    virtual double earnings() const;
    virtual void print() const;
private:
    double baseSalary;
};
#endif