#include <iostream>
using std::cout;
using std::endl;
using std::cin;
class Base
{
public:
   virtual void print() const = 0;
};
class Derived1 : virtual public Base
{
public:
   void print() const
   {
       cout << "Derived1\n";
   }
};
class Derived2 : virtual public Base
{
public:
   void print() const
   {
       cout << "Derived2\n";
   }
};
class Multiply : public Derived1, public Derived2
{
    void print() const
    {
        cout << "This is Multiply class:\n";
        Derived1::print();
        cout << " and ";
        Derived2::print();
    }
};
int main()
{
    Derived1 derived1;
    Derived2 derived2;
    Multiply both;
    Base *array[3] = { &derived1, &derived2, &both };
    for (size_t i = 0; i < sizeof( array ) / sizeof( Base * ); i++)
    {
        array[ i ] -> print();
    }
    cin.get();
    return 0;
}



