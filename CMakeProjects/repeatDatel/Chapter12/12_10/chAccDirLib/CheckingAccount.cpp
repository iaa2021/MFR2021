#include "CheckingAccount.h"
CheckingAccount::CheckingAccount( double b, double tr )
    : Account( b ), trPay( ( tr > 0.0 ) ? tr : 0 )
{
    cout << "\nChecking acc balance is: " << Account::getBalance() << "$" << endl;
    cout << "Transaction pay is: " << getPay() * 100 << "%" << endl;
}
void CheckingAccount::credit(double c)
{
    if( c > balance )
    cout << "Credit amount exceeds account balance." << endl;
    else
    {
        double oldBalance = getBalance();
        cout << "\nTransaction payment is: " << ( ( trPay * c ) + 0.15 ) << "$\n";
        oldBalance -= ( c + ( ( trPay * c ) + 0.15 ) );
        setBalance( oldBalance );
        cout << "New balance is: " << getBalance() << "$" << endl;
    }
}
void CheckingAccount::debit(double d)
{
    double oldBalance = getBalance();
        cout << "\nTransaction payment is: " << ( ( trPay * d ) + 0.15 ) << "$\n";
        oldBalance += ( d - ( ( trPay * d ) + 0.15 ) );
        setBalance( oldBalance );
        cout << "New balance is: " << getBalance() << "$" << endl;
}
void CheckingAccount::getVersion()
{
    Account::getVersion();
}
double CheckingAccount::getPay() const
{
    return trPay;
}