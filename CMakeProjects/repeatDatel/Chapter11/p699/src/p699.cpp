#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "PhoneNumber.h"
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    PhoneNumber phone;
    phone.getVersion();
    cout << "Enter phone number in the form (123) 456-7890:" << endl;
    cin >> phone;
    cout << "The phone number entered was: ";
    cout << phone << endl;
    return 0;
}