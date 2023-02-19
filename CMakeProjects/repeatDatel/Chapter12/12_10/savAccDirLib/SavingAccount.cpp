#include "SavingAccount.h"
SavingAccount::SavingAccount( double b, double i )
    : Account( b ), iR( ( i > 0.0 && i < 1.0 ) ? i : 0 )
{
    cout << "\nSavings acc balance is: " << Account::getBalance() << "$" << endl;
    cout << "Year interest is: " << getInterest() << endl;
}

double SavingAccount::calculatelnterest()
{
    double years, newBalance, profit;
    cout << "\nIput number of years, you'd like to calculate profit in Checking Acc:\n";
    cin >> years;
    newBalance = getBalance() * pow( (1 + iR), years );
    profit = newBalance - getBalance();
    Account::setBalance( newBalance );
    cout << "New balance is: " << getBalance() << "$" << endl;
    cout << "Profit for " << years << " years is: ";
    return profit;
}
void SavingAccount::credit(double c)
{
    if( c > balance )
    cout << "Credit amount exceeds account balance." << endl;
    else
    Account::creditAcc( c );
}
void SavingAccount::debit(double d)
{
    Account::debitAcc( d );
}
void SavingAccount::getVersion()
{
    cout << "SavingAccount library version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
double SavingAccount::getInterest() const
{
    return iR;
}