#include <iostream>
using std::cerr;
using std::ios;
using std::endl;
using std::cout;
#include <cstdlib>
using std::exit;
#include <fstream>
using std::ofstream;
#include "ClientData.h"
int main()
{
    ofstream outClient( "credit.txt", ios::binary );
    if ( !outClient )
    {
        cerr << "\nFile cannot be opened.\n";
        exit( 1 );
    }
    ClientData blankClient;
    for (int i = 0; i < 100; i++)
    {
        outClient.write( reinterpret_cast< const char * >( &blankClient ), sizeof( ClientData ) );
    }
    cout << "\nThe job is done.\n";
    return 0;
}
