#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Account.h"
Account::Account( const string &ownerName, const string &accNumber, double accBalance )
{
    setName( ownerName );
    setAccNumber( accNumber );
    setBalance( accBalance );
}
void Account::setName( const string &n )
{
    Name = n;
}
string Account::getName() const
{
    return Name;
}
void Account::setAccNumber( const string &aN )
{
    accNumber = aN;
}
string Account::getAccNumber() const
{
    return accNumber;
}
void Account::setBalance( double b )
{
    balance = ( b >= 0.0? b: 0.0 );
}
double Account::getBalance() const
{
    return balance;
}
void Account::debit()
{
    double d, b;
    cout << "Input sum, you'd like to put on account N" << getAccNumber() << ": ";
    cin >> d;
    b = getBalance();
    b += d;
    setBalance( b );
    cout << "\n New balance of account N " << getAccNumber() << " is: " << getBalance() << endl;
}
void Account::credit()
{
    double c, b;
    b = getBalance();
    cout << "Input sum, you'd like to withdrawal from account: ";
    cin >> c;
    if( c > b )
     cout << "This sum is bigger than your balance.\n";
     else
     b -= c;
     setBalance( b );
    cout << "\n New balance of account N " << getAccNumber() << " is: " << getBalance() << endl;
}
void Account::print() const
{
    cout << "Account number " << getAccNumber() << endl;
    cout << "Account's owner is " << getName() << endl;
    cout << "It's balance is: " << getBalance() << endl;
}