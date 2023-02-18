#include "CheckingAccount.h"
CheckingAccount::CheckingAccount( double b, double tr )
    : Account( b ), trPay( ( tr > 0.0 ) ? tr : 0 )
{
}
void CheckingAccount::credit(double c)
{
    if( c > balance )
    cout << "Credit amount exceeds account balance." << endl;
    else
    {
        cout << "\nTransaction payment is: " << ( ( trPay * c ) + 0.15 ) << "$\n";
        balance -= ( c + ( ( trPay * c ) + 0.15 ) );
        cout << "New balance is: " << balance << endl;
    }
}
void CheckingAccount::debit(double d)
{
    cout << "\nTransaction payment is: " << ( ( trPay * d ) + 0.15 ) << "$\n";
    balance += ( d - ( ( trPay * d ) + 0.15 ) );
    cout << "New balance is: " << balance << endl;
}
void CheckingAccount::getVersion()
{
    Account::getVersion();
}