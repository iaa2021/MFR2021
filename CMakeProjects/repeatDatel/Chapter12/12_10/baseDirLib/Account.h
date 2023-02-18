#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cout;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw;
#include <cmath>
using std::pow;
#include "config.h"
class Account
{
public:
    Account( double = 0 );
    void setBalance( double );
    double getBalance() const;
    void debitAcc(double);//to put money into the account
    void creditAcc(double);//cash withdrawal
    static void getVersion();
private:
    double balance;
};
#endif