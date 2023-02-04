#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include <cstdlib>
using std::rand;
using std::srand;
#include "config.h"
#include <iomanip>
using std::setw;
class Array
{
friend ostream &operator<<( ostream &, const Array & );
public:
    Array( int , int );
    ~Array();
    void operator()( int, int );
    void getVersion() const;
private:
    int row;
    int column;
    int **ptr;
};

