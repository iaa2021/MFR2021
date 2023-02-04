#include "Array.h"
Array::Array( int r, int c )
    : row( r ), column( c )
{
    ptr = new int *[ row ];
    for (int i = 0; i < r; i++)
    {
        ptr[ i ] = new int[ column ];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            ptr[ i ][ j ] = rand()%100;
        }
    }
}
void Array::operator()( int r, int c )
{
    cout << "ptr [ " << r << " ][ " << c << " ] = " << ptr[ r ][ c ] << endl;
}
ostream &operator<<( ostream &output, const Array &a )
{
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.column; j++)
        {
            output << a.ptr[ i ][ j ] << ", ";
        }
        cout << endl;
    }
    return output;
}
Array::~Array()
{
    for (int i = 0; i < row; i++)
    {
        delete [] ptr;
    }
    
}
void Array::getVersion() const
{
    cout << "Library version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}