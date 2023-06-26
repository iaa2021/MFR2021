#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of min and max.\n";
    cout << "The minimum of 12 and 7 is: " << min( 12, 7 ); 
    cout << "\nThe maximum of 12 and 7 is: " << max( 12, 7 ); 
    cout << "\nThe minimum of 'G' and 'Z' is: " << min( 'G' , 'Z' ); 
    cout << "\nThe maximum of 'G' and 'Z' is: " << max( 'G' , 'Z' ); 
    cout << endl; 

    return 0;
}