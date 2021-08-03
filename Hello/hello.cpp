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
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>(); 
    cout << "Shared count: " << shPtr1.use_count() << endl;
    shared_ptr<MyClass>shPtr2 = shPtr1; 
    cout << "Shared count: " << shPtr1.use_count() << endl;
    getch();
    return 0;
    
}