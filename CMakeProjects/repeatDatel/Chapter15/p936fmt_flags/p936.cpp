#include <iostream>
using std::cout;
using std::endl;
using std::ios_base;
using std::oct;
using std::scientific;
using std::showbase;
int main()
{
    int integerValue = 1000; 
    double doubleValue = 0.0947628; 
    cout << "The value of the flags variable is: " << cout.flags() << endl; 
    cout << "\nPrint int and double in original format:\n"; 
    cout << integerValue << '\t' << doubleValue << endl << endl; 
    ios_base::fmtflags originalValue = cout.flags();
    cout << showbase << oct << scientific << endl;
    cout << "The value of the flags variable is: " << cout.flags() << endl;
    cout << "\nPrint int and double in a new format:\n";
    cout << integerValue << '\t' << doubleValue << endl;
    cout.flags( originalValue );//restore original format
    cout << "The restored value of the flags variable is: " << cout.flags() << endl;
    cout << "\nPrint values in original format again:\n";
    cout <<  integerValue << '\t' << doubleValue << endl << endl;
    return 0;
}