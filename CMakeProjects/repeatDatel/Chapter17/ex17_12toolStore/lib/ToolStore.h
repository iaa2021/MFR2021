#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::ios;
using std::cin;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;
#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <string>
using std::string;
#include <cstring>
using std::strncpy;
#include "config.h"
class ToolStore
{
public:
    ToolStore( int = 0, string = "", int = 0, double = 0.0 );
    void setNumber( int );
    int getNumber() const;
    void setName( string );
    string getName() const;
    void setQwantity( int );
    int getQwantity() const;
    void setPrice( double );
    double getPrice() const;
    static void printVersion();
private:
    int number;
    int qwantity;
    char name[ 30 ];
    double price;
};

