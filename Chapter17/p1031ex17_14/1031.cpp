#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
#include <fstream>
using std::fstream;
using std::ofstream;
using std::ifstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <map>
using std::map;
using std::pair;
#include <string>
using std::string;
int main()
{
    ofstream onFile( "datasize.txt", ios::out );
    if(!onFile)
    {
        cerr << "File cannot be opened.\n";
        exit( 1 );
    }
    map <string, int> dBase;
    dBase.insert(pair<string, int>("char", 1));
    dBase.insert(pair<string, int>("unsigned char", 1));
    dBase.insert(pair<string, int>("short int", 2));
    dBase.insert(pair<string, int>("unsigned short int", 2));
    dBase.insert(pair<string, int>("int", 4));
    dBase.insert(pair<string, int>("unsigned int", 4));
    dBase.insert(pair<string, int>("long int", 4));
    dBase.insert(pair<string, int>("unsigned long int", 4));
    dBase.insert(pair<string, int>("float", 4));
    dBase.insert(pair<string, int>("double", 8));
    dBase.insert(pair<string, int>("long double", 10));
    onFile << left << setw(20) << "Data type" << setw(5) << "Size" << endl;
    for(auto pair : dBase)
    {
        onFile << left << setw(20) << pair.first << setw(5) << pair.second << endl;
    }
    return 0;
}