#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
using std::atof;
using std::atoi;
using std::atol;
using std::strtod;
int main()
{
    double d = atof( "5486.33" );
    cout << "The string \"5486.33\" converted to double is " << d << endl;
    int i = atoi( "815782.36" );
    cout << "The string \"815782.36\" converted to integer is " << i << endl;
    long k = atol( "258147.96" );
    cout << "The string \"258147.96\" converted to long is " << k << endl;
    cout << "Converted value divided by 2 is: " << k/2 << endl;

    double d1;
    const char *string1 = "51.2 % is admitted";
    char *strPtr;
    d1 = strtod( string1, &strPtr );
    cout << "\nThe string \"" << string1 << "\" is converted to the \ndouble value " << d1;
    cout << " and the string \"" << strPtr << "\" are admitted." << endl;
    return 0;
}