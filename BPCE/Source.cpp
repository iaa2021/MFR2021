// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

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
    ComissionEmployee* CEptr = &ce;
    BPCE* BPCEptr = &employee;
    cout << "Invoking print function by Ceptr:\n";
    CEptr->print();
    cout << "\nInvoking print function by BPCeptr:\n";
    BPCEptr->print();
    CEptr = &employee;
    cout << "\nInvoking print function by Ceptr pointing to BPCE object:\n";
    CEptr->print();
    cin.get();
    return 0;
}