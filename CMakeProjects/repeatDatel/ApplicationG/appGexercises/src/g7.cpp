#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <algorithm>
using std::reverse;
#include <string>
using std::string;
#include "config.h"
int main( int argc, char *argv[] )
{
    if( argc != 3 )
    cout << "Usage g2, arg1, arg2.\n";
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "G7, record from one file to another:\n";
    cout << "\nArgument1 is: " << argv[ 1 ] << ", argument2 is: ";
    cout << argv[ 2 ] << endl;
    ifstream inFile( argv[1], ios::in );
    if( !inFile )
    {
        cout << argv[1] << " cannot be opened.\n";
        return -1;
    }
    string text; char c = inFile.get();
    while (inFile)
    {
        text += c;
        c = inFile.get();
    }
    cout << "\nfile1 and text contains:\n";
    for( size_t i = 0; i < text.size(); i++ )
        {
            cout << text.at(i);
        }
    ofstream outFile( argv[2], ios::app );
    if( !outFile )
    {
        cout << argv[2] << " cannot be opened.\n";
        return -3;
    }
    cout << "\nNow recording from " << argv[1] << " to " << argv[2] << endl;
    cout << " in reverce order.\n";
    reverse( text.begin(), text.end() );
    for( size_t i = 0; i < text.size(); i++ )
        {
            outFile.put( text.at( i ) );
        }
    cout << "\nfile1 and text contains:\n";
    for( size_t i = 0; i < text.size(); i++ )
        {
            cout << text.at(i);
        }
     
    return 0;
}