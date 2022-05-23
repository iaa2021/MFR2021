#include <iostream>
using std::cout;
using std::endl;
class Base
{
public:
    virtual void print() const = 0;
};
class DerivedOne : virtual public Base
{
public:
    void print() const
    {
        cout << "Derived1.\n";
    }
};
class DerivedTwo : virtual public Base
{
public:
    void print() const
    {
        cout << "Derived2.\n";
    }
};
class Multiply : public DerivedOne, public DerivedTwo
{
    void print() const
    {
        cout << "\nThis is an Multiply's print function.\n";
        DerivedTwo::print();
        cout << " and ";
        DerivedOne::print();
    }
};
int main()
{
    DerivedOne one;
    DerivedTwo two;
    Multiply both;
    Base* array[3] = { &both, &one, &two };
    for (size_t i = 0; i < sizeof(array)/sizeof(Base); i++)
    {
        array[i]->print();
    }
    std::cin.get();
    return 0;
}

