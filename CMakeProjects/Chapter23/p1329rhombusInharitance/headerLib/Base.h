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
        cout << "Derived one.\n";
    }
};
class DerivedTwo : virtual public Base
{
    public:
    void print() const
    {
        cout << "Derived two.\n";
    }
};

class Multiply : public DerivedOne, public DerivedTwo
{
    public:
    void print() const
    {
        DerivedTwo::print();
        cout << " and ";
        DerivedOne::print();
    }
};

