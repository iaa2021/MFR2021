#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
using std::cerr;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;
#include <iomanip>
using std::setprecision;
using std::setw;
#include <cstdlib>
using std::exit;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <string>
using std::string;
#include "config.h"
void outputLine( int, const string, double );
enum RequestType { ZERO_BALANCE=1, CREDIT_BALANCE, DEBIT_BALANCE, END };
int getRequest();
bool shouldDisplay( int, double );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ifstream inClientFile ( "clients.txt", ios::in );
    if( !inClientFile )
    {
        cerr << "File cannot be opened by inClientFile.\n";
        exit( 1 );
    }
    int request, account; char name[ 30 ]; double balance;
    request = getRequest();
    while ( request != END )
    {
        switch ( request )
        {
        case ZERO_BALANCE:
            cout << "Accounts with zero balances:\n";
            break;
        case CREDIT_BALANCE:
            cout << "Accounts with credit balances:\n";
            break;
        case DEBIT_BALANCE:
            cout << "Accounts with debit balances:\n";
            break;
        default:
            cout << "You've entered wrong request.\n";
            break;
        }
        inClientFile >> account >> name >> balance;
        while ( !inClientFile.eof() )
        {
            if( shouldDisplay( request, balance ) )
            outputLine( account, name, balance );
            inClientFile >> account >> name >> balance;
        }
        inClientFile.clear();
        inClientFile.seekg( 0 );
        request = getRequest();
    }
    cout << "End of run.\n";
    return 0;
}
void outputLine( int account, const string name, double balance )
{
    cout << left << setw( 10 ) << account << setw( 13 ) << name;
    cout << right << setw( 7 ) << setprecision( 2 ) << balance << '$' << endl;
}
int getRequest()
{
    int request;
    cout << "\nEnter request" << endl; 
    cout << " 1 - List accounts with zero balances" << endl; 
    cout << " 2 - List accounts with credit balances" << endl; 
    cout << " 3 - List accounts with debit balances" << endl; 
    cout << " 4 - End of run" << fixed << showpoint; 
    do
    {
        cout << "? ";
        cin >> request;
    } while ( request << ZERO_BALANCE && request >> END );
    return request;
}
bool shouldDisplay( int type, double balance )
{
    if( type == ZERO_BALANCE && balance == 0 )
    return true;
    if( type == CREDIT_BALANCE && balance < 0 )
    return true;
    if( type == DEBIT_BALANCE && balance > 0 )
    return true;

    return false;
}