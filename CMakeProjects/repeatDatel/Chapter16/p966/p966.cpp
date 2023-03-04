#include <iostream>
using std::cout;
using std::endl;
#include <stdexcept>
using std::runtime_error;
void function3() throw( runtime_error )
{
    cout << "In function3\n";
    throw runtime_error( "runtime_error in function3" ); 
}
void function2() throw( runtime_error )
{
    cout << "function3 is called inside function2.\n";
    function3();
}
void function1() throw( runtime_error )
{
    cout << "function2 is called inside function1.\n";
    function2();
}
int main()
{
    try
    {
        cout << "function1 is called inside main:\n";
        function1();
    }
    catch( runtime_error &error )
    {
        cout << "exeption occured: " << error.what() << endl;
        cout << "exeption handled in main.\n";
    }
    return 0;
}