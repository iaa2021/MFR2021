#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <cmath>
using std::pow;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "config.h"
int main()
{
    double Amount, Principal = 24;
    cout << fixed << setprecision( 2 );
    for ( double rate = 0.01; rate < 0.06; rate += 0.01 )
    {
        cout << "\nCalculation for " << rate * 100 << "% per year.\n";
        for (int years = 0; years < 396; years++)
        {
            Amount = Principal * ( pow( ( 1 + rate ), years  ) );
            cout << ( 1626 + years ) << "   " << Amount << "$" << ( ( ( years + 1 ) % 8 == 0 ) ? '\n' : '\t' ) ; 
        }
        cout << "\nProject version: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
        cout << (PROJECT_VERSION_PATCH) << endl;
    }
    return 0;
}