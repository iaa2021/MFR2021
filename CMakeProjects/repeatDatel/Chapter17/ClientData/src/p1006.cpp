#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::ios;
#include <fstream>
using std::ofstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
#include "ClientData.h"
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ofstream outCredit( "credit.txt", ios::binary );
    int acc; double b; string fN, lN;
    if( !outCredit )
    {
        cerr << "\nFile cannot be opened.\n";
        exit( 1 );
    }
    ClientData client;
    for (int i = 0; i < 100; i++)
    {
    outCredit.write(reinterpret_cast<const char *>( &client ), sizeof( ClientData ));
    }
    cout << "\nSet of accs's been created.\n";
    return 0;
}