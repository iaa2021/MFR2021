#include "SavingAccount.h"
SavingAccount::SavingAccount( double b, double i )
    : Account( b ), iR( ( i > 0.0 && i < 1.0 ) ? i : 0 )
{
}

double SavingAccount::calculatelnterest()
{
    double years, newBalance, profit;
    cout << "\nInclude number of years, you'd like to calculate profit in Checking Acc:\n";
    cin >> years;
    newBalance = balance * pow( 1 + iR, years );
    profit = newBalance - balance;
    balance = newBalance; 
    cout << "New balance is: " << balance << endl;
    cout << "Profit for " << years << " years is: ";
    return ( newBalance - balance );
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
    Account::getVersion();
}