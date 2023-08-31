#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::ios;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include "config.h"

int main( int argc, char *argv[] )
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of command line's arguments.\n";
    if( argc != 3 )
    cout << "Usage: copyFile infile_name outfile_name" << endl ;
    else
    {
        ifstream inFile( argv[ 1 ], ios::in ); 
        if( !inFile )
        {
            cout << argv[ 1 ] << " cannot be opened.\n";
            return -1;
        }
        ofstream outFile( argv[ 2 ], ios::out );
        if( !outFile )
        {
            cout << argv[ 2 ] << " cannot be opened.\n";
            inFile.close();
            return -2;
        }
        char c = inFile.get();
        while (inFile)
        {
            outFile.put( c );
            c = inFile.get();
        }
        
    }
    return 0;
}