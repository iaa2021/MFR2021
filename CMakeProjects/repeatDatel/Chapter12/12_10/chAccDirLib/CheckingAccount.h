#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"
#include "config.h"
class CheckingAccount : public Account
{
public:
    CheckingAccount(double, double);
    void debit(double);//to put money into the account
    void credit(double);//cash withdrawal
    double getPay() const;
    static void getVersion();
private:
    double trPay;
    double balance;
};
#endif