#ifndef SAVACC_H
#define SAVACC_H
#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
class SavAcc : public Account
{
    public:
    SavAcc( const string &, const string &, double, double );
    void setInterestRate( double );
    double getInterestRate() const;
    double calculateInterest();
    void credit();
    void debit();
    void print() const;
    private:
    double intRate;
};
#endif