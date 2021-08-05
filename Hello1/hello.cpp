#include <iostream>
#include <conio.h>
#include <memory>
using namespace std;


int main()
{
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    unique_ptr<int>unPtr2 = move( unPtr1 );
    cout << *unPtr2 << endl; 
    getch();
    return 0;
    
}