#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <string>
using std::string;
#include <cmath>
using std::pow;
#include <iomanip>
using std::setprecision;
using std::setw;
class SavingsAccount
{
public:
	SavingsAccount(string, string, double);
	double calculateMonthlyInterest();
	static void modifyInterestRate();
	void setBalance();
	void print();
private:
	double savBalance;
	static int interestRate;
	string first;
	string last;
};


