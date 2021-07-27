#include <iostream>
#include <iomanip>
using namespace std;
#include "ComissionEmployee.h"
#include "BPCE.h"
int main()
{
    ComissionEmployee ce("Sue", "Jones", "222-22-2222", 10000, 0.6);
    BPCE employee("Bob", "Lewis", "333-33-3333", 5000, 0.4, 300);
    cout << fixed << setprecision(2);
    ComissionEmployee* CEptr = 0;
    BPCE* BPCEptr = 0;
    CEptr = &ce;
    cout << "Invoking print function by Ceptr:\n";
    CEptr->print();
    return 0;
}