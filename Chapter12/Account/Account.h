#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Account
{
public:
    Account( const string &, const string &, double );
    void setBalance( double );
    double getBalance() const;
    void setName( const string & );
    string getName() const;
    void setAccNumber( const string & );
    string getAccNumber() const;
    void credit();
    void debit();
    void print() const;
private:
    string Name;
    string accNumber;
    double balance;
};
#endif

