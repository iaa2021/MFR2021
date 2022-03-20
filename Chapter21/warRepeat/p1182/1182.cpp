#include <iostream>
using std::cout;
#include <cstdlib>
using std::atof;
using std::atoi;
using std::atol;

int main()
{
    double d = atof( "99.0" );
    cout << "The string \" 99.0 \" converted to double is " << d << '\n';
    cout << "The converted value divided by 2 is " << d / 2.0 << '\n';
    int i = atoi( "2548" );
    cout << "The string \" 2548 \" converted to integer is " << i << '\n';
    cout << "The converted value divided by 2 is " << i / 2 << '\n';
    long l = atol( "1000000" );
    cout << "The string \" 1000000 \" converted to long is " << l << '\n';
    cout << "The converted value divided by 20 is " << l / 20 << '\n';
    return 0;
}