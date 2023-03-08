#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios;
#include <fstream>
using std::ofstream;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
#include "config.h"
int main()
{
    ofstream outCredit( "Credit.txt", ios::binary );
    if( !outCredit )
    {
        cerr << "File cannot be opened.\n";
        exit( 1 );
    }
    ClientData client;
    for (int i = 0; i < 100; i++)
    {
        outCredit.write( reinterpret_cast<const char*>(&client), sizeof(ClientData) );
    }
    return 0;
}