#include <iostream>
#include <iomanip>
using namespace std;
#include "BPCE.h"
int main()
{
    BPCE employee( "Bob", "Lewis", "333-33-3333", 5000, 0.4, 300 );
    cout << fixed << setprecision(2);
    employee.print();
    cout << "\nEmployee's earnings: $" << employee.earnings() << endl;
    cout << "\nUpdated employee information is:\n";
    employee.setBaseSalary( 1000 );
    employee.print();
    cout << "\nEmployee's earnings: $" << employee.earnings() << endl; 
    return 0;
}