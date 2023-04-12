#include "List.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    List<int> intList;
    intList.printVersion();
    for (size_t i = 0; i < 5; i++)
    {
        intList.insertAtFront( i * 2 );
    }
    cout << "\nAfter insert values at front integer's list is:\n";
    intList.print();
    for (size_t i = 0; i < 5; i++)
    {
        intList.insertAtBack( i );
    }
    cout << "\nAfter insert values at back integer's list is:\n";
    intList.print();
    int n;
    intList.removeFromFront(n);
    cout << "\nAfter remove from front values  integer's list is:\n";
    intList.print();
    cout << "\nInput value to remove from back: ";
    cin >> n;
    intList.removeFromBack(n);
    cout << "\nAfter remove from back values  integer's list is:\n";
    intList.print();
    return 0;
}