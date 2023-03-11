#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::showpoint;
using std::fixed;
using std::cerr;
using std::right;
using std::left;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::fstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <string>
using std::string;
int main()
{
    ofstream outOldMaster( "oldmast.txt", ios::out );
    if( !outOldMaster )
    {
        cerr << "File cannot be opened by outOldMast.\n";
        exit( 1 );
    }
    ifstream inOldMaster( "oldmast.txt", ios::in );
    if( !inOldMaster )
    {
        cerr << "File cannot be opened by inOldMast.\n";
        exit( 1 );
    }
    ofstream outTransaction( "trans.txt", ios::out );
    if( !outTransaction )
    {
        cerr << "File cannot be opened by inTransaction.\n";
        exit( 1 );
    }
    ifstream inTransaction( "trans.txt", ios::in );
    if( !inTransaction )
    {
        cerr << "File cannot be opened by inTransaction.\n";
        exit( 1 );
    }
    ofstream outNewMaster( "newmast.txt", ios::out );
    if( !inOldMaster )
    {
        cerr << "File cannot be opened by inOldMast.\n";
        exit( 1 );
    }
    int accountNumber; char name[ 30 ]; double balance;
    outOldMaster << setw(10) << "Account" << setw(15) << right << "Name";
    outOldMaster << setw(20) << right << "Balance\n";
    cout << "Input data in oldmast.txt:\n? ";
    while ( cin >> accountNumber >> name >> balance )
    {
        outOldMaster << accountNumber << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
    return 0;
}