#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
using std::strtoul;

int main()
{
    unsigned long x;
    const char *string1 = "1234567abc";
    char *sPtr;
    x = strtoul( string1, &sPtr, 0 );
    cout << "The original string is \"" << string1 << "\"";
    cout << "\nThe converted value is " << x << " \nThe remainder string is \"" << sPtr;
    cout << "\"\nThe converted value minus 567 is " << x - 567 << endl;
    return 0;
}