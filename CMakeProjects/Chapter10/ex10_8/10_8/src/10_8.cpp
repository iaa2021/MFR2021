#include "SavingsAccount.h"
int main()
{
	SavingsAccount acc1("Susan", "Brown", 2000);
	SavingsAccount acc2("John", "Smith", 3000);
	acc1.print();
	acc2.print();
	acc1.setBalance();
	acc2.setBalance();
	cout << "\nNew balances are next:\n";
	acc1.print();
	acc2.print();
	return 0;
}