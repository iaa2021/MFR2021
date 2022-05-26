#include <iostream>
using std::cout;
using std::endl;
using std::ios;
using std::cin;
#include <fstream>
using std::ofstream;
using std::ifstream;
int main( int args, char *argv[] )
{
    if( args != 3 )
    cout << "Usage: CopyFile infile_name outfile_name\n";
    else
    {
        ifstream inFile( argv[1], ios::in );
        if( !inFile ) 
        {
            cout << argv[1] << " cannot be opened.\n";
            return -1;   
        }
        ofstream outFile( argv[2], ios::out );
        if( !outFile ) 
        {
            cout << argv[2] << " cannot be opened.\n";
            inFile.close();
            return -2;   
        }
        char c = inFile.get();
        while ( inFile )
        {
            outFile.put( c );
            c = inFile.get();
        }
    }
    return 0;
}