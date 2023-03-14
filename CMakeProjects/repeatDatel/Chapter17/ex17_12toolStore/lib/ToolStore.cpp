#include "ToolStore.h"
#include "config.h"

ToolStore::ToolStore( int nmb, string nm, int qw, double pr )
{
    setName( nm ); setNumber( nmb ); setQwantity( qw ); setPrice( pr );
}
void ToolStore::setNumber( int nmb )
{
    number = nmb;
}
int ToolStore::getNumber() const
{
    return number;
}
void ToolStore::setQwantity( int qw )
{
    qw = ( qw < 0 ? 0 : qw );
}
int ToolStore::getQwantity() const
{
    return qwantity;
}
void ToolStore::setName( string nmString )
{
    const char *nm = nmString.data();
    int length = nmString.length();
    length = ( length < 30 ? length : 29 );
    strncpy( name, nm, length );
    name[ length ] = '\0';
}
string ToolStore::getName() const
{
    return name;
}
void ToolStore::setPrice( double pr )
{
    price = ( pr < 0 ? 0.0 : pr );
}
double ToolStore::getPrice() const
{
    return price;
}

void ToolStore::printVersion()
{
    cout << "Library's version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}