#include <iostream>
#include <conio.h>
#include <memory>
using namespace std;
class MyClass
{
public:
 MyClass()
 {
     cout << "Constructor invoked.\n";
 }
 ~MyClass()
 {
      cout << "Destructor invoked.\n";
 }
};

int main()
{
    {
         unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
    }
   
    getch();
    return 0;
    
}