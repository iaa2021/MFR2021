#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Account.h"
int main()
{
    cout << fixed << setprecision( 2 );
    Account acc1( "Bob Fisher", "1234567", 1485.32 );
    acc1.print();
    acc1.debit();
    acc1.credit();
    acc1.print();
    return 0;
}