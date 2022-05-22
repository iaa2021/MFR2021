#include <iostream>
using std::cout;
using std::endl;
class Test
{
public:
    void test()
    {
        cout << "\nYou are in test function.\n";
    }
    int value;
};
void arrowStar( Test * );
void dotStar( Test * );

int main()
{
    Test test;
    test.value = 8;
    arrowStar( &test );
    dotStar ( &test );
    return 0;
}
void arrowStar( Test *testPtr )
{
    void ( Test::*memPtr )() = &Test::test;
    ( testPtr ->*memPtr )();
    testPtr ->test();
}
void dotStar( Test *testPtr2 )
{
    int Test::*vPtr = &Test::value;
    cout << ( *testPtr2 ).*vPtr << endl;
    cout << testPtr2 ->value << endl;
}


