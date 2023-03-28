#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;
#include <fstream>
using std::ofstream;
#include <cstdlib>
using std::exit;
int main()
{
    ofstream outClientFile( "clients.txt", ios::app );
    if( !outClientFile )
    {
        cerr << "File couldn't be opened.\n";
        exit( 1 );
    }
    cout << "\nEnter the account, name and balance, EOF to end input:\n? ";
    int acc; char name[ 30 ]; double balance;
    while ( cin >> acc >> name >> balance )
    {
        outClientFile << acc << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
    cin.get();
    return 0;
}