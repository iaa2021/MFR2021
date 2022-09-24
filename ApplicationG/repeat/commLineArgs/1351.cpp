#include <iostream>
using std::cout;
using std::endl;
using std::ios;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include "configure.h"
int main( int argc, char *argv[] )
{
    cout << "Project version is " << (PROJECT_VERSION) << endl;
    if( argc != 3 )
    cout << "Usage copyFile inFile_name outFile_name.\n";
    else
    {
        ifstream inFile( argv[ 1 ], ios::in );
        if ( !inFile )
        {
            cout << argv[ 1 ] << " cannot be opened.\n";
            return -1;
        }
        ofstream outFile( argv[ 2 ], ios::out );
        if ( !outFile )
        {
            cout << argv[ 2 ] << " cannot be opened.\n";
            inFile.close();
            return -2;
        }
        char c = inFile.get();//to read first character
        while ( inFile )
        {
            outFile.put( c );
            c = inFile.get();
        }
    }
    return 0;
}