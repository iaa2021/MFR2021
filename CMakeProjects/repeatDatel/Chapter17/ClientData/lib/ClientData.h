#pragma once
#include <string>
using std::string;
#include <cstring>
using std::strncpy;
class ClientData
{
public:
    ClientData( int = 0, string = "", string = "", double = 0.0 );
    void setAccountNumber( int );
    int getAccountNumber() const;
    void setFirstName( string );
    string getFirstName() const;
    void setLastName( string );
    string getLastName() const;
    void setBalance( double );
    double getBalance() const;
private:
    int account;
    double balance;
    char firstName[ 10 ];
    char lastName[ 15 ];
};
