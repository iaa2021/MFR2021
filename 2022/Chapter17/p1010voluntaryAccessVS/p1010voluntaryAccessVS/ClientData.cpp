#include <string>
using std::string;
#include "ClientData.h"
ClientData::ClientData(int accValue, string lastNameValue, string firstNameValue, double balanceValue)
{
    setAccNumber(accValue);
    setLastName(lastNameValue);
    setFirstName(firstNameValue);
    setBalance(balanceValue);
}
int ClientData::getAccNumber() const
{
    return acc;
}
void ClientData::setAccNumber(int accValue)
{
    acc = accValue;
}
string ClientData::getLastName() const
{
    return lastName;
}
void ClientData::setLastName(string lnString)
{
    const char* lnValue = lnString.data();
    int length = lnString.size();
    length = (length < 15 ? length : 14);
    strncpy_s(lastName, lnValue, length);
    lastName[length] = '\0';
}
string ClientData::getFirstName() const
{
    return firstName;
}
void ClientData::setFirstName(string fnString)
{
    const char* fnValue = fnString.data();
    int length = fnString.size();
    length = (length < 15 ? length : 14);
    strncpy_s(firstName, fnValue, length);
    firstName[length] = '\0';
}
double ClientData::getBalance() const
{
    return balance;
}
void ClientData::setBalance(double balanceValue)
{
    balance = balanceValue;
}
