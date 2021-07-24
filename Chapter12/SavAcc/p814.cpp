#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
#include "SavAcc.h"
int main()
{
    SavAcc client( "John Smith", "7654321", 4325.67, 0.05 );
    client.print();
    cout << client.calculateInterest() << endl;
    return 0;
}