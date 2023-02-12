#include "Polinom.h"
Polinom::Polinom( int mp )
    : pw( mp >= 0? mp : 1 )
{
    volume = 0;
    srand( time( 0 ) );
    setPolinom( pw );
}
void Polinom::setPolinom( int p )
{
    ptr = new int *[ p + 1 ];
    for (int i = 0; i < p + 1; i++)
    {
        ptr[ i ] = new int[ 2 ];
    }
    for (int i = 0; i < p + 1; i++)
    {
        ptr[ i ][ 0 ] = i;
        ptr[ i ][ 1 ] = rand()%100;
    }
}
void Polinom::print() const
{
    for (int i = this ->pw; i >= 0; i--)
    {
        if( i == 0 )
        cout << this ->ptr[ i ][ 1 ] << endl;
        else if( i == 1 )
        cout << this->ptr[ i ][ 1 ] << " * x" << " + ";
        else
        cout << this->ptr[ i ][ 1 ] << " * x" << this->ptr[ i ][ 0 ] << " + ";
    }
}
void Polinom::getVersion()
{
    cout << "Library version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
Polinom Polinom::operator+( Polinom &pn )
{
    int min = this ->pw; int max = pn.pw; pn.volume = 1;
    if( min > pn.pw )
    {
        min = pn.pw; max = this -> pw; this ->volume = 1; pn.volume = 0;
    }
    Polinom p( max );
    for (int i = 0; i <= max; i++)
    {
        if( i <= min )
        p.ptr[ i ][ 1 ] = this ->ptr[ i ][ 1 ] + pn.ptr[ i ][ 1 ];
        else
        {
            if( pn.volume == 1 )
            p.ptr[ i ][ 1 ] = pn.ptr[ i ][ 1 ];
            else
            p.ptr[ i ][ 1 ] = this ->ptr[ i ][ 1 ];
        }
    }
    return p;
}