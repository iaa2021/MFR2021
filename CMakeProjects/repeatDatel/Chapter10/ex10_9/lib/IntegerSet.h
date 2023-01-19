#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
class IntegerSet
{
private:
    int array[100];
public:
    IntegerSet();
    void unionOfSets( IntegerSet & );
    void intersectionOfSets( IntegerSet & );
    void print();
    void getVersion();
};