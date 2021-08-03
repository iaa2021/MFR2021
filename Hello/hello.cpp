#include <iostream>
#include <conio.h>
#include <memory>
using namespace std;
int main()
{
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    cout << *unPtr1 << endl;
    getch();
    return 0;
    
}