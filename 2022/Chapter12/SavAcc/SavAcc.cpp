#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
#include "SavAcc.h"
SavAcc::SavAcc( const string &ownerName, const string &accNumber, double accBalance, double iR )
: Account( ownerName, accNumber, accBalance )
{
    setInterestRate( iR );
}
void SavAcc::setInterestRate( double iR )
{
    intRate = ( iR >= 0 )? iR: 0.0;
}
double SavAcc::getInterestRate() const
{
    return intRate;
}
double SavAcc::calculateInterest()
{
    int month; double nB, oB;
    oB = getBalance();
    cout << "Input number of month, you keep money in the bank: ";
    cin >> month;
    nB = Account::getBalance() * ( pow( ( 1 + ( getInterestRate() / 12 ) ), month ) );
    Account::setBalance( nB );
    cout << fixed << setprecision( 2 );
    cout << "During " << month << " months " << Account::getName() << "'ve got " << ( nB - oB ) << "$." << endl;
    cout << "and " << Account::getName() << "'s new balance is ";
    return nB; 
}
void SavAcc::debit()
{
    Account::debit();
}
void SavAcc::credit()
{
    Account::credit();
}
void SavAcc::print() const
{
    Account::print();
    cout << "interest rate is: " << getInterestRate() * 100 << "% per year." << endl;
}
