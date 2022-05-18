#include <iostream>
using std::cout;
using std::endl;
class TestMutable
{
    public:
    TestMutable( int v = 0 )
    {
        value = v;
    }
    int getValue() const
    {
        return value++;
    }
    private:
    mutable int value;
};
int main()
{
    const TestMutable test(99);
    cout << "Initial value: " << test.getValue();
    cout << "\nModified value: " << test.getValue() << endl;
    return 0;
}