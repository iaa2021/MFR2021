#include <iostream>
using std::cout;
using std::endl;
#include "Base.h"

int main()
{
    Multiply both;
    DerivedOne one;
    DerivedTwo two;
    Base * array[ 3 ];
    array[ 0 ] = &both; array[ 1 ] = &one; array[ 2 ] = &two;
    for (size_t i = 0; i < 3; i++)
    {
        array[ i ] ->print();
    }
    cout << "Hello world.\n";
    return 0;
}

