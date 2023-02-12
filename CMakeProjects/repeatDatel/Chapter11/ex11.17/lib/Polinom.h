#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;
#include "config.h"
class Polinom
{
public:
    Polinom( int = 1 );
    void setPolinom( int );
    void print() const;
    void getVersion() const;
private:
    int pw;//pow
    int **ptr;
};

