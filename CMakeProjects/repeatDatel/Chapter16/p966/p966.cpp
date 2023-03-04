#include <iostream>
using std::cout;
using std::endl;
#include <stdexcept>
using std::runtime_error;
void function3() throw( runtime_error )
{
    cout << "In function3"
}