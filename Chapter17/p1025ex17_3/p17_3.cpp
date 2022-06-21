#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::fixed;
using std::left;
using std::right;
using std::showpoint;
using std::cerr;
using std::ostream;
#include<fstream>
using std::ifstream;
using std::ofstream;
using std::fstream;
#include<string>
using std::string;
#include <iomanip>
using std::setw;
using std::setprecision;
#include<vector>
using std::vector;
void outputLine( int, char *, char *, double );
void inputClientsDataBase( ofstream &, int, char *, char *, double );
void inputTransactionBase( ofstream &, int, double );
vector< vector<double> > insertDbaseInVector( ifstream &, vector< vector<double> >, int, double);
int main()
{
    int accNmb; char fN[10]; char lN[15]; double balance;
    ifstream oldMaster( "oldmast.txt", ios::in );
    if ( !oldMaster )
    {
        cerr << "File oldmast.txt cannot be opened by oldMaster.\n";
        exit(1);
    }
    while ( oldMaster >> accNmb >> fN >> lN >> balance  )
    {
        outputLine( accNmb,fN, lN, balance );
    }
    
    return 0;
}
void outputLine( int a, char *f, char *l, double b )
{
    cout << left << setw(5) << a << setw(11) << f << setw(16) << l << setw(10) << right << b << endl;
}