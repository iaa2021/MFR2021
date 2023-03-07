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
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ofstream outClientFile( "clients.txt", ios::app );
    if( !outClientFile )
    {
        cerr << "File cannot be opened by outClientFile.\n";
        exit( 1 );
    }
    char name[ 30 ]; int account; double balance;
    cout << "Enter the account, name, and balance." << endl; 
    cout << "Enter end-of-file to end input.\n? "; 
    while ( cin >> account >> name >> balance )
    {
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "\n? ";
    }
    ifstream inClientFile( "clients.txt", ios::in );
    if( !inClientFile )
    {
        cerr << "File cannot be opened by inClientFile.\n";
        exit( 1 );
    }
    cout << left << setw( 10 ) << "Account" << setw( 13 ) << "Name" << "Balance";
    cout << endl << fixed << showpoint; 
    while ( inClientFile >> account >> name >> balance )
    outputLine( account, name, balance );
    return 0;
}
void outputLine( int account, const string name, double balance )
{
    cout << left << setw( 10 ) << account << setw( 13 ) << name;
    cout << right << setw( 7 ) << setprecision( 2 ) << balance << '$' << endl;
}