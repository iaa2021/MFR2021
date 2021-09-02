// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#include "ComissionEmployee.h"
#include "BPCE.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
int main()
{
    cout << fixed << setprecision;
    ComissionEmployee ce("Sue", "Jones", "222-22-2222", 10000, 0.6);
    BPCE bpce ("Bob", "Lewis", "333-33-3333", 5000, 0.4, 300);
    
    HourlyEmployee he("Karen", "Price", "444-44-4444", 16.75, 40);
    cout << fixed << setprecision(2);
    ComissionEmployee *CEptr = &ce;
    BPCE *BPCEptr = &bpce;
    
    HourlyEmployee* HEptr = &he;
    vector<Employee*>store;
    store.clear();
    store.push_back(&ce); store.push_back(&bpce); store.push_back(&he);
    for (int i = 0; i < store.size(); i++)
    {
        store[i]->print();
        cout << "\nEarnings is: " << store[i]->earnings() << endl;
    }

    cin.get();
    return 0;
}