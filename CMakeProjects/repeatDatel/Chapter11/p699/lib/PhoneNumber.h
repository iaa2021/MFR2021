#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::endl;
#include <string>
using std::string;
class PhoneNumber
{
    friend ostream &operator<<( ostream &output, const PhoneNumber & );
    friend istream &operator>>( istream &input, PhoneNumber & );
    public:
    void getVersion();
private:
    string areaCode; 
    string exchange; 
    string line;
};
#endif