#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <iomanip>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include "List.h"
int main()
{
    srand( time( 0 ) );
    List<int> intList;
    for( int i = 0; i < 10; i++ )
    {
        intList.insertAtBack( rand()%50 + 1 );
    }
    intList.print(); 
    int number;
    cout << "Input number and insert it at front:\n";
    cin >> number;
    intList.insertAtFront( number );
    intList.print();
    cout << "Input number and insert it at back:\n";
    cin >> number;
    intList.insertAtBack( number );
    intList.print();
    cout << "Removing element from back.\n";
    intList.removeFromBack();
    intList.print();
    cout << "Removing element from front.\n";
    intList.removeFromFront();
    intList.print();
    return 0;
}