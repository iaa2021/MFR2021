#include "SavingsAccount.h"
int SavingsAccount::interestRate = 3;

SavingsAccount::SavingsAccount(string fName, string sName, double balance)
	: first(fName), last(sName), savBalance(balance)
{
}

void SavingsAccount::setBalance()
{
	savBalance = calculateMonthlyInterest();
}

double SavingsAccount::calculateMonthlyInterest()
{
	cout << fixed << setprecision( 2 );
	int month;
	cout << "\nInput months for calculation of interest: ";
	cin >> month;
	cout << "\nDuring " << month << " months acc increased on ";
	cout << savBalance * pow( ( 1 + ( static_cast<double>(interestRate) / 1200 ) ), month ) - savBalance;
	return savBalance * pow( ( 1 + ( static_cast<double>(interestRate) ) / 1200 ), month );
}

void SavingsAccount::modifyInterestRate()
{
	int rate;
	cout << "\nInput new interest rate: ";
	cin >> rate;
	interestRate = rate;
}
void SavingsAccount::print()
{
	cout << first << ", " << last << " has " << savBalance << " in own account.\n";
}