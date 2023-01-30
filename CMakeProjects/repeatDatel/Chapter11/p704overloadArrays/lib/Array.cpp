#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <cstdlib> // prototype exit function
using std::exit;
#include "Array.h"
Array::Array( int arraySize )
{
    size = ( arraySize > 0? arraySize: 10 );
    ptr = new int[ size ];
}

Array::~Array()
{
}
