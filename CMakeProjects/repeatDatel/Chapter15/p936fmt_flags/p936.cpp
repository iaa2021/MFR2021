#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios_base;
using std::oct;
using std::scientific;
using std::showbase;
using std::boolalpha;
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
    cout << boolalpha;
    cout << "Streams consistantion cout.rdstate() is: " << cout.rdstate() << endl;
    cout << "cout.eof() is: " <<  cout.eof() << "\ncout.fail(): " << cout.fail();
    cout << "\ncout.bad() is: " << cout.bad() << endl;
    cout << "Streams consistantion cin.rdstate() is: " << cin.rdstate() << endl;
    cout << "cin.eof() is: " <<  cin.eof() << "\ncin.fail(): " << cin.fail();
    cout << "\ncin.bad() is: " << cin.bad() << endl;
    return 0;
}