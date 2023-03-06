#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
using std::cerr;
#include <cstdlib>
using std::exit;
#include <fstream>
using std::ofstream;
#include "config.h"
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
    return 0;
}