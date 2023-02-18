#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.h"
#include "config.h"
class SavingAccount : public Account
{
public:
    SavingAccount(double, double);
    double calculatelnterest();
    void debit(double);//to put money into the account
    void credit(double);//cash withdrawal
    static void getVersion();
private:
    double iR;
    double balance;
};
#endif