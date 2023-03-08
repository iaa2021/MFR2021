#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::ios;
using std::cin;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;
#include <fstream>
using std::ifstream;
using std::ostream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "ClientData.h"
#include "config.h"
void outputLine( ostream &, const ClientData & );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ifstream inCredit( "credit.txt", ios::in );
    if( !inCredit )
    {
        cerr << "File cannot be opened.\n";
        exit( 1 );
    }
    cout << left << setw( 10 ) << "Account"; 
    cout << setw( 16 ) << "Last Name" << setw( 11 ) << "First Name";
    cout << left << setw( 10 ) << right << "Balance" << endl;
    ClientData client;
    //read first record
    inCredit.read( reinterpret_cast<char *>(&client), sizeof(ClientData) );
    while ( inCredit && !inCredit.eof() )
    {
        if( client.getAccountNumber() != 0 )
        outputLine( cout, client );//output only valid accounts
        //read new record
        inCredit.read( reinterpret_cast<char *>(&client), sizeof(ClientData) );
    }
    return 0;
}
void outputLine( ostream &output, const ClientData &client )
{
    output << left << setw( 10 ) << client.getAccountNumber();
    output << setw( 16 ) << client.getFirstName();
    output << setw( 11 ) << client.getLastName();
    output << setw( 10 ) << fixed << showpoint << setprecision( 2 );
    output << right << client.getBalance() << endl;
}