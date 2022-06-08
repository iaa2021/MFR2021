#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <string>
using std::string;
class ClientData
{
public:
    ClientData(int = 0, string = "", string = "", double = 0.0);
    void setAccNumber(int);
    int getAccNumber() const;
    void setLastName(string);
    string getLastName() const;
    void setFirstName(string);
    string getFirstName() const;
    void setBalance(double);
    double getBalance() const;
private:
    int acc;
    char lastName[15];
    char firstName[10];
    double balance;
};
#endif

