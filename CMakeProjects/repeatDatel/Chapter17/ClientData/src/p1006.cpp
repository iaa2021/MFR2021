#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::ios;
using std::cin;
#include <fstream>
using std::ofstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
#include "ClientData.h"
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ofstream outCredit( "credit.txt", ios::in|ios::out|ios::binary );
    int acc; double b; string fN, lN;
    if( !outCredit )
    {
        cerr << "\nFile cannot be opened.\n";
        exit( 1 );
    }
    ClientData client;
    cout << "\nEnter account number, 0 to end input:\n? ";
    cin >> acc;//ask client for account number
    while ( acc > 0 && acc < 100 )
    {
        cout << "Enter first name, last name, balance:\n";
        cin >> setw( 10 ) >> fN; cin >> setw( 15 ) >> lN; cin >> b;
        client.setAccountNumber( acc ); client.setBalance( b );
        client.setFirstName( fN ); client.setLastName( lN );
        //find record's position
        outCredit.seekp( ( client.getAccountNumber() - 1 ) * sizeof(ClientData) );
        //make record
        outCredit.write( reinterpret_cast<const char*>(&client), sizeof(ClientData) );
        //ask client for new account number
        cout << "\nEnter account number, 0 to end input:\n? : ";
        cin >> acc;
    }
    return 0;
}