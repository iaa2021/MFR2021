#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;
class Polinom
{
public:
    Polinom( int = 1 );
    void setPolinom( int );
private:
    int kt, pw;//koefficient, pow
};

