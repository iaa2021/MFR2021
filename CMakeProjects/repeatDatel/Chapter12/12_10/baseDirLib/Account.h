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
class Account
{
public:
    Account( double = 0 );
    void setBalance( double );
    double getBalance( double );
    void debit( double );//to put money into the account
    void credit( double );//cash withdrawal
private:
    double balance;
    double credit;
    double debit;
};
#endif