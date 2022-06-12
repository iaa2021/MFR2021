#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::fixed;
using std::showpoint;
using std::left;
using std::right;
#include <fstream>
using std::ostream;
using std::fstream;
using std::ofstream;
using std::ifstream;
#include <iomanip>
using std::setw;
using std::setprecision; 
#include <cstdlib>
using std::exit;
#include "ClientData.h"
int main()
{
    fstream inOutCredit( "credit.txt", ios::in | ios::app | ios::binary );
    if( !inOutCredit )
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    ClientData client;
    inOutCredit.seekp(0);
    for( int i = 0; i < 100; i++ )
    {
        inOutCredit.write( reinterpret_cast< const char * >( &client ), sizeof(ClientData) );
    }
    return 0;
}