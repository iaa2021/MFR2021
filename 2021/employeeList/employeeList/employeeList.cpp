
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#include "Employee.h"
#include "ComissionEmployee.h"
#include "BPCE.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"

int main()
{
    cout << fixed << setprecision(2);
    ComissionEmployee ce("Sue", "Jones", "222-22-2222", 10000, 0.06);
    BPCE bpce("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    SalariedEmployee se("John", "Smith", "111-11-1111", 800);
    HourlyEmployee he("Karen", "Price", "444-44-4444", 16.75, 40);
    vector<Employee*>store;
    store.push_back(&ce);
    store.push_back(&bpce);
    store.push_back(&se);
    store.push_back(&he);
    for (size_t i = 0; i < store.size(); i++)
    {
        store[i] -> print();
        cout << "\nand employee's earnings is: "<< store[i] -> earnings() << "$" << "\n\n";
    }
    return 0;
}

