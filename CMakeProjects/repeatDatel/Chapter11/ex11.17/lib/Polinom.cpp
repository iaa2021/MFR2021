#include "Polinom.h"
Polinom::Polinom( int mp )
    : pw( mp >= 0? mp : 1 )
{
    setPolinom( pw );
}

void Polinom::setPolinom( int p )
{
    int **ptr = new int *[ p + 1 ];
    for (int i = 0; i < p + 1; i++)
    {
        ptr[ i ] = new int[ 2 ];
    }
    for (int i = 0; i < p + 1; i++)
    {
        ptr[ i ][ 0 ] = i;
        ptr[ i ][ i ] = rand()%100;
    }
    
}