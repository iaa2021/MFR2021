#include <iostream>
using std::cout;
#include <cstdlib>
using std::atof;
using std::atoi;
using std::atol;
using std::strtod;
using std::strtol;
int main()
{
    double d = atof( "99.0" );
    cout << "The string \" 99.0 \" converted to double is " << d << '\n';
    cout << "The converted value divided by 2 is " << d / 2.0 << '\n';
    int i = atoi( "2548" );
    cout << "The string \" 2548 \" converted to integer is " << i << '\n';
    cout << "The converted value divided by 2 is " << i / 2 << '\n';
    long l = atol( "1000000" );
    cout << "The string \" 1000000 \" converted to long is " << l << '\n';
    cout << "The converted value divided by 20 is " << l / 20 << '\n';
    cout << "Demonstration of strtod function, converting string into double value & residual string.\n";
    double d1;
    const char *string1 = "52.38% are admitted.";
    char *stringPtr;
    d1 = strtod( string1, &stringPtr );
    cout << "The string \"" << string1 << "\" is converted  to the double\n value " << d1;
    cout << " & the string \"" << stringPtr << "\"\n"; 
    cout << "Demonstration of strtod function, converting string into long value & residual string.\n";
    long x;
    const char *string2 = "-1234567abc.";
    char *stringPtr2;
    x = strtol( string2, &stringPtr2, 0 );
    cout << "The string \"" << string1 << "\"\nthe converted value is " << x;
    cout << "\nThe remainder of the original string is \"" << stringPtr2 << "\"";
    cout << "\nThe converted value + 567 is " << x + 567 << "\n";
    return 0;
}