#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H
#include <string>
using namespace std;
class ComissionEmployee
{
    public:
    ComissionEmployee( const string &, const string &, const string &,
    double = 0.0, double = 0.0  );
    void setFirstName( const string & );
    string getFirstName() const;
    void setLastName( const string & );
    string getLastName() const;
    void setSocialSecurityNamber( const string & );
    string getSocialSecurityNamber() const;
    void setGrossSales( double );
    double getGrossSales() const;
    void setComissionRate( double );
    double getComissionRate() const;
    double earnings() const;
    void print() const;
    private:
    string firstName;
    string lastName;  
    string sSN;
    double grossSales;
    double comissionRate;
};
#endif