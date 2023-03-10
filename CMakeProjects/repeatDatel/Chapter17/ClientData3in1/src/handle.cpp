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
using std::ofstream;
using std::ostream;
using std::fstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "ClientData.h"
#include "config.h"
int enterChoice();
void createTextFile( fstream &);
void outputLine( ostream &, const ClientData & );
void updateRecord( fstream & );
void createRecord( fstream & );
void deleteRecord( fstream & );
void newRecord( fstream & );
int getAccount( const char * const );
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END }; 
int main()
{
    fstream inOutCredit( "credit.txt", ios::in|ios::out );
    if( !inOutCredit )
    {
        cerr << "File cannot be opened by inOutCredit\n";
        exit( 1 );
    }
    int choice;
    while ( ( choice = enterChoice() ) != END )
    {
        switch ( choice )
        {
        case PRINT:
            createTextFile( inOutCredit );
            break;
        case UPDATE:
            updateRecord( inOutCredit );
            break;
        case NEW:
            newRecord( inOutCredit );
            break;
        case DELETE:
            deleteRecord( inOutCredit );
            break;
        default:
        cout << "You've entered new record.\n";
            break;
        }
        inOutCredit.clear();
    }
    
}
void outputLine( ostream &output, const ClientData &client )
{
    output << left << setw( 10 ) << client.getAccountNumber();
    output << setw( 16 ) << client.getFirstName();
    output << setw( 11 ) << client.getLastName();
    output << setw( 10 ) << fixed << showpoint << setprecision( 2 );
    output << right << client.getBalance() << endl;
}
int getAccount( const char * const prompt )
{
    int accountNumber;
        cout << prompt << " from 1 - 100: ";
        cin >> accountNumber;
    return accountNumber;
}
void newRecord( fstream &insertInFile )
{
    int accountNumber = getAccount( "\nEnter account number to create:\n? " );
    //move pointer to a corresponding position
    insertInFile.seekg( ( accountNumber - 1 ) * sizeof( ClientData ) );
    ClientData client;
    //check, is this position empty
    insertInFile.read( reinterpret_cast<char *>(&client), sizeof( ClientData ) );
    if( client.getAccountNumber() != 0 )
    cout << "\nAccount is already exists.\n";
    else
    {
        client.setAccountNumber( accountNumber );
        char fN[ 10 ]; char lN[ 15 ]; double bln;
        cout << "\nInput first name, last name, balance:\n";
        cin >> setw( 11 ) >> fN; cin >> setw( 16 ) >> lN; cin >> bln;
        client.setFirstName(fN); client.setLastName(lN); client.setBalance(bln);
        insertInFile.seekp( ( accountNumber - 1 ) * sizeof( ClientData ) );
        insertInFile.write( reinterpret_cast<const char *>(&client), sizeof(ClientData) );

    }
}
void deleteRecord( fstream &deleteFromFile )
{
    int accountNumber = getAccount( "Enter account number to delete:\n? " );
    cin >> accountNumber;
    //move pointer to a corresponding position
    deleteFromFile.seekg( ( accountNumber - 1 ) * sizeof( ClientData) );
    //check, if in is this position exists an account
    ClientData client;
    deleteFromFile.read( reinterpret_cast<char *>(&client), sizeof( ClientData ) );
    if( client.getAccountNumber() == 0 )
    cout << "\nSuch account doesn't exist.\n";
    else
    {
        ClientData blank;//creating an empty record
        //move pointer to a corresponding position
        deleteFromFile.seekp( ( accountNumber - 1 ) * sizeof( ClientData) );
        deleteFromFile.write( reinterpret_cast<const char *>(&blank), sizeof(ClientData) );
        cout << "Account " << accountNumber << " was deleted.\n";
    }
}
void updateRecord( fstream &updateFile )
{
    int accountNumber = getAccount( "Enter an account to update: " );
    cin >> accountNumber;
    ClientData client;
    //move pointer to a corresponding position
    updateFile.seekg( ( accountNumber - 1 ) * sizeof( ClientData) );
    //check, if in is this position exists an account
    updateFile.read( reinterpret_cast<char *>(&client), sizeof(ClientData) );
    if( client.getAccountNumber() == 0 )
    cout << "\nSuch acc doesn't exist.\n";
    else
    {
        double transaction, newBalance; 
        cout << "\nAccount is:\n"; outputLine( cout, client );
        cout << "\nInput transaction, + if you put money on the acc,\n";
        cout << "- if you withdrawal money from acc: ";
        cin >> transaction;
        newBalance = client.getBalance() + transaction;
        client.setBalance( newBalance );
        updateFile.seekp( ( accountNumber - 1 ) * sizeof( ClientData) );
        updateFile.write( reinterpret_cast<const char *>(&client), sizeof(ClientData) );
        cout << "Account after updating is:\n";
        outputLine( cout, client );
    }
}
void createTextFile( fstream &readFromFile )
{
    ofstream outPrintFile( "print.txt", ios::out );
    if( !outPrintFile )
    {
        cerr << "File cannot be opened by outPrintFile:\n";
        exit( 1 );
    }
    outPrintFile << left << setw( 10 ) << "Account" << setw( 16 ); 
    outPrintFile << "Last Name" << setw( 11 ) << "First Name";
    outPrintFile << right << setw( 10 ) << "Balance" << endl; 

    ClientData client;
    readFromFile.seekg( 0 );
    readFromFile.read( reinterpret_cast<char *>(&client), sizeof(ClientData) );
    while( !readFromFile.eof() )
    {
        if( client.getAccountNumber() != 0 )
        outputLine( outPrintFile, client );
        //to read next record 
        readFromFile.read( reinterpret_cast<char *>(&client), sizeof(ClientData) );
    }
}
int enterChoice()
{
    cout << "\nEnter your choice" << endl;
    cout << "1 - store a formatted text file of accounts" << endl; 
    cout << " called \"print.txt\" for printing" << endl; 
    cout << "2 - update an account" << endl; 
    cout << "3 - add a new account" << endl; 
    cout << "4 - delete an account" << endl; 
    cout << "5 - end program\n? "; 

    int menuChoice; 
    cin >> menuChoice; // input user's choice 
    return menuChoice; 
}