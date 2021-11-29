
#include <cstdlib>
using std::rand;
class Shop;
class Visitor
{
    friend class Shop;
private:
    Visitor *next;
    int tirnTime;//time, when buyer dropped into the shop
    int tirnInterval;// interval among buyers visits into the shop
    int serviseInterval;// time interval, during which client was servised
    int leaveTime;//time, when buyer leaved shop
public:
    Visitor()
    : tirnInterval( rand()%4 + 1 ), serviseInterval( rand()%7 + 1 )
    {}
};


