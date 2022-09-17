#include <iostream>
using std::cout;
using std::endl;
using std::cin;
class TestMutable
{
private:
    mutable int value;
public:
    TestMutable( int v = 0 )
    {
        value = v;
    }
    int getValue() const
    {
        return ++value;
    }
};

int main()
{
    const TestMutable test( 33 );
    cout << "First invoke: " << test.getValue() << endl;
    cout << "Second invoke: " << test.getValue() << endl;
    cin.get();
    return 0;
}
