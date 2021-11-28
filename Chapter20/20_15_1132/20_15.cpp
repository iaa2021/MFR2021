#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Shop.h"
int main()
{
    srand( time(0) );
    Shop shop;
    for( int i = 0; i < 5; i++ )
    {
    shop.buyerArrive( 720 );
    shop.servise( 720 );
    }
    return 0;
}