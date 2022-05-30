#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::fixed;
using std::showpoint;
using std::left;
using std::right;
using std::ios;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <fstream>
using std::ifstream;
#include <cstdlib>
using std::exit;
#include <string>
using std::string;
enum requestType { ZERO_BALANCE = 1, CREDIT_BALANCE = 2, DEBIT_BALANCE = 3, END = 4 };
int getRequest();
void outputLine( int, const string, double );
bool shouldDisplay( int, double );
int main()
{
    ifstream inClientFile( "clients.txt", ios::in );
    if ( !inClientFile )
    {
        cerr << "\nFile cannot be opened.\n";
        exit( 1 );
    }
    int request, acc; char name[ 30 ]; double balance;
    request = getRequest();
    cout << fixed << showpoint;
    while ( request != END )
    {
        switch( request )//printing an caption
        {
            case ZERO_BALANCE:
            cout << "\nAccounts with zero balances:\n";
            break;
            case DEBIT_BALANCE:
            cout << "\nAccounts with debit balances:\n";
            break;
            case CREDIT_BALANCE:
            cout << "\nAccounts with credit balances:\n";
            break;
            default:
            cout << "You've entered an wrong choise.\n";
            break;
        }
        inClientFile >> acc >> name >> balance;
        while ( !inClientFile.eof() )
        {
            if( shouldDisplay( request, balance ) )
                outputLine( acc, name, balance );
            inClientFile >> acc >> name >> balance;
        }
        inClientFile.clear();
        inClientFile.seekg( 0 );
        request = getRequest();
    }
    cout << "\nEnd of run.\n";
    cin.get();
    return 0;
}
int getRequest()
{
    int request;
    cout << "\nEnter request:\n1 - list of accounts with zero balance;\n";
    cout << "2 - list of accounts with credit balance;\n3 - list of accounts with debit balance;\n";
    cout << "4 - end of run.\n";
    do
    {
        cout << "? ";
        cin >> request;
    
    } while ( request << ZERO_BALANCE && request >> END );
    return request;
}
bool shouldDisplay( int type, double balance )
{
    if( type == ZERO_BALANCE && balance == 0 )// whether output zero balances
        return true;
    if( type == CREDIT_BALANCE && balance > 0 )// whether output credit balances
        return true;
    if( type == DEBIT_BALANCE && balance < 0 )// whether output debit balances
        return true;
    return false;
}
void outputLine( int acc, const string name, double balance )
{
    cout << left << setw( 10 ) << acc << setw( 13 ) << name << setw( 7 ) << setprecision( 2 ) << right << balance << endl;
}