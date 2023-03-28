#include <iostream>
using std::cout;
using std::endl;
using std::cerr;
using std::fixed;
using std::ios;
using std::showpoint;
using std::left;
using std::right;
using std::cin;
#include <fstream>
using std::ifstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <string>
using std::string;
void outputLine( int, const string, double );
int main()
{
    ifstream inClientFile( "clients.txt", ios::in );
    if( !inClientFile )
    {
        cerr << "File couldn't be opened.\n";
        exit( 1 );
    }
    int acc; char name[ 30 ]; double balance;
    cout << left << setw( 10 ) << "Account" << setw( 13 ) << "Name" << "Balance" << endl << fixed << showpoint;
    while ( inClientFile >> acc >> name >> balance )
    {
        outputLine( acc, name, balance );
    }
    cin.get();
    return 0;
}
void outputLine( int acc, const string name, double balance )
{
    cout << left << setw( 10 ) << acc << setw( 13 ) << name << setw( 7 ) << setprecision( 2 ) << right << balance << endl;
}