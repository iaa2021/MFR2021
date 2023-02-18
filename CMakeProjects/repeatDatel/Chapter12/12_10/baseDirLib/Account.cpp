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
void Account::debitAcc( double d )
{
    balance += d;
}
void Account::creditAcc( double c )
{
    if( c > balance )
    cout << "Debit amount exceeds account balance." << endl;
    else
    balance -= c;
}
void Account::getVersion()
{
    cout << "Account library version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}