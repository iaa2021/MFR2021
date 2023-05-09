#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
using std::atof;
using std::atoi;
using std::atol;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of atof function.\n";
    double d = atof( "99.87");
    cout << "The string \"99.87\" converted to double is " << d << endl;
    cout << "The value divided on 2 is: " << ( d / 2 ) << endl;
    cout << "\nDemonstration of atoi function.\n";
    int i = atoi( "2988");
    cout << "The string \"2988\" converted to integer is " << i << endl;
    cout << "The value divided on 2 is: " << ( i / 2 ) << endl;
    cout << "\nDemonstration of atol function.\n";
    long x = atol( "1000000");
    cout << "The string \"100000\" converted to long is " << x << endl;
    cout << "The value divided on 2 is: " << ( x / 2 ) << endl;
    return 0; 
}