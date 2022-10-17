#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <string>
using std::string;
#include "config.h"
int main( int argc, char *argv[] )
{
    cout << "Project version is " << (PROJECT_VERSION) << endl;
    if ( argc < 3 )
    {
        cout << "Usage: project_name file1_name file2_name\n";
        exit( 1 );
    }
    else
    {
        string text, text1;
        ifstream inFile( argv[ 1 ], ios::in );
        if ( !inFile )
        {
            cout <<  argv[ 1 ] << " cannot be opened.\n";
            exit( 1 );
        }
        ofstream onFile( argv[ 2 ], ios::out );
        if ( !onFile )
        {
            cout << argv[ 2 ] << " cannot be opened.\n";
            exit( 1 );
        }
        char c = inFile.get();
        text += c;
        while ( inFile )
        {
            c = inFile.get();
            text += c;
        }
        inFile.close();
        
        for( string::reverse_iterator rit = text.rbegin(); rit != text.rend(); rit++ )
        {
            onFile.put( *rit );
        }
        onFile.close();
    }
    return 0;
}