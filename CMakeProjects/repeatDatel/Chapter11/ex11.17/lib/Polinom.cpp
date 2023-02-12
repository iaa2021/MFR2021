#include "Polinom.h"
Polinom::Polinom( int mp )
    : pw( mp >= 0? mp : 1 )
{
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
void Polinom::getVersion() const
{
    cout << "\nLibrary version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}