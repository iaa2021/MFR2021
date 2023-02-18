#include "Account.h"
Account::Account( double b )
{
    setBalance( b );
}

void Account::setBalance( double b )
{
    balance = ( b >= 0.0? b: 0.0 );
}
double Account::getBalance() const
{
    return balance;
}
void Account::debitAcc()
{
    double d;
    cout << "\nInput debit sum, i.e. sum, you'd like to put onto account:\n";
    cin >> d;
    balance += d;
}
Account::~Account()
{
}