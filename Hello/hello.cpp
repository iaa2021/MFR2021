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
    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;
    }
    cout << "hello, world\n";
    cout << "Work on VSC with GitHub\n";
    getch();
    return 0;
    
}