#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
using std::strtod;
using std::strtol;
using std::strtoul;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of strtod function.\n";
    const char *string1 = "51.2% are admitted"; 
    char *stringPtr;
    double d = strtod( string1, &stringPtr );
    cout << "The string \"" << string1 << "\" is converted into double " << d;
    cout << " and string " << "\"" << stringPtr << "\"\n"; 
    cout << "\nDemonstration of strtol function.\n";
    const char *string2 = "-1234567abc"; 
    char *stringPtr2;
    long x = strtol( string2, &stringPtr2, 0 );
    cout << "The string \"" << string2 << "\" is converted into long " << x;
    cout << " and string " << "\"" << stringPtr2 << "\"\n";
    cout <<  "\nThe converted value plus 567 is " << x + 567 << endl; 
    cout << "\nDemonstration of strtoul function.\n";
    const char *string3 = "7654321xyz"; 
    char *stringPtr3;
    unsigned long y = strtol( string3, &stringPtr3, 0 );
    cout << "The string \"" << string3 << "\" is converted into unsigned long " << y;
    cout << " and string " << "\"" << stringPtr3 << "\"\n";
    cout <<  "\nThe converted value plus 567 is " << x + 567 << endl; 
    return 0;
}