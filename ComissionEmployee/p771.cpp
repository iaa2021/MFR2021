#include <iostream>
#include <iomanip>
using namespace std;
#include "ComissionEmployee.h"
int main()
{
    ComissionEmployee employee( "Sue", "Jones", "222-22-2222", 10000, 0.6 );
    cout << fixed << setprecision(2);
    employee.print();
    cout << "\nUpdated employee information is:\n";
    employee.setGrossSales( 8000 );
    employee.setComissionRate( 0.1 );
    employee.print();
    cout << "\nEmployee's earnings: $" << employee.earnings() << endl; 
    return 0;
}