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
    static void getVersion();
    Polinom operator+( Polinom & );
    Polinom operator-( Polinom & );
    void operator=( Polinom & );
    void operator+=( Polinom & );
    void operator-=( Polinom & );
private:
    int pw;//pow
    int **ptr;//2 dimensional array
    int volume;//means bigger number of members
};

