#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::ios;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::exit;
#include <fstream>
using std::fstream;
#include "ClientData.h"
int main()
{
int accNumber;
char lastName[ 15 ];
char firstName[ 10 ];
double balance;
fstream outCredit( "credit.txt", ios::in|ios::app|ios::binary );
if( !outCredit )
{
cerr << "\nFile cannot be opened.\n";
exit( 1 );
}

cout << "\nEnter account number(1 - 100, 0 to end input).\n";
ClientData client;
cin >> accNumber;
while ( accNumber > 0 && accNumber <= 100 )
{
    cout << "\nEnter last name, first name, balance:\n";
    cin >> setw( 15 ) >> lastName >> setw( 10 ) >> firstName >> balance;
    client.setAccNumber( accNumber );
    client.setLastName( lastName );
    client.setFirstName( firstName );
    client.setBalance( balance );
    outCredit.seekp( ( client.getAccNumber() - 1 ) * sizeof( ClientData ) );
    outCredit.write( reinterpret_cast< const char * >( &client ), sizeof( ClientData ) );
    cout << "\nEnter account number(1 - 100, 0 to end input).\n";
    cin >> accNumber;
}
cin.get();
return 0;
}
