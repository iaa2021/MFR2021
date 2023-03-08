#include "ClientData.h"

ClientData::ClientData( int accN, string fN, string lN, double bV )
{
    setAccountNumber( accN );
    setFirstName( fN );
    setLastName( lN );
    setBalance( bV );
}

void ClientData::setAccountNumber( int accN )
{
    account = accN;
}
int ClientData::getAccountNumber() const
{
    return account;
}
void ClientData::setFirstName( string fNS )
{
    char *fN = fNS.data();
    int length = fNS.size();
    length = ( length > 10 ? 9 : length );
    strncpy( firstName, fN, length );
    firstName[ length ] = '\0';
}
string ClientData::getFirstName() const
{
    return firstName;
}
void ClientData::setLastName( string lNS )
{
    char *lN = lNS.data();
    int length = lNS.size();
    length = ( length < 15 ? length : 14 );
    strncpy( lastName, lN, length );
    lastName[ length ] = '\0';
}
string ClientData::getLastName() const
{
    return lastName;
}
void ClientData::setBalance( double b )
{
    balance = ( b < 0 ? 0.0 : b );
}
double ClientData::getBalance() const
{
    return balance;
}