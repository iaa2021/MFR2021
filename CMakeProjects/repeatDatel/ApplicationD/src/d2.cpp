#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
using std::setprecision;
using std::fixed;

#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise on page 1383, :\n";
    cout << "_LINE_ is " << __LINE__ <<  "\n_FILE is " <<__FILE__ << endl;
    cout << "\n_DATE_ is " << __DATE__ << endl;
    cout << "\n __TIME__ is " << __TIME__ ;
    cout << "\n__STDC__ is " << __STDC__;
    cout << "\n__cplusplus is " << __cplusplus << endl;
    return 0;
}