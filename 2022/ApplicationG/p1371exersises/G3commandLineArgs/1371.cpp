#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
#include <fstream>
using std::ifstream;
#include "config.h"

int main( int args, char *argv[] )
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    if ( args < 3 )
    cout << "Usage: program name, file1 name, file2 name.\n";
    else
    {
        ifstream inFile1( argv[ 1 ], ios::in );
        if ( !inFile1 )
        {
            cout << argv[ 1 ] << " cannot be opened.\n";
            exit( 1 );
        }
        char c = inFile1.get();
        cout << c;
        while ( inFile1 )
        {
            c = inFile1.get();
            cout << c;
        }
        inFile1.close();
        cout << argv[ 1 ] << " is brought to the screen.\n";
        ifstream inFile2( argv[ 2 ], ios::in );
        if ( !inFile2 )
        {
            cout << argv[ 2 ] << " cannot be opened.\n";
            exit( 1 );
        }
        c = inFile2.get();
        cout << c;
        while ( inFile2 )
        {
            c = inFile2.get();
            cout << c;
        }
        inFile2.close();
        cout << endl << argv[ 2 ] << " is brought to the screen.\n";
        return 0;
    }
    

    
}