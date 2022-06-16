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
#include<fstream>
using std::ifstream;
using std::ofstream;
using std::fstream;
#include<string>
using std::string;
#include <iomanip>
using std::setw;
using std::setprecision;
void outputLine( int, const string, double );
int main()
{
    ifstream inOldMaster( "oldmast.txt", ios::in );
    if (!inOldMaster)
    {
        cerr << "File oldmast.txt cannot be opened.\n";
        exit(1);
    }
    ifstream inTransaction( "trams.txt", ios::in );
     if (!inTransaction)
    {
        cerr << "File trans.txt cannot be opened.\n";
        exit(1);
    }
    ofstream outNewMaster( "newmast.txt", ios::app );
     if (!outNewMaster)
    {
        cerr << "File newmast.txt cannot be opened.\n";
        exit(1);
    }
    cout << setw(10) << left <<  "Account" << setw(13) << "Name" << setw(7)  << right << "Balance" << endl;
    cout << fixed << showpoint;
    int accNum; string name; double balance; double dollarAmount;
    while (inOldMaster >> accNum >> name >> balance)
    {
        outputLine( accNum, name, balance );
    }
    while ( inTransaction >> accNum >> dollarAmount )
    {
        cout << accNum << " " << dollarAmount << endl;
    }
    cout << "Enter account, 0 to end input:\n? ";
    cin >> accNum;
    while ( accNum != 0 )
    {
        cout << "\nInput name & balance:\n? "
        cin >> name >> balance;
        outNewMaster << accNum << name << balance << endl;
        cin >> accNum ;
    }
 
    return 0;
}
void outputLine( int acc, const string name, double balance )
{
  cout << setw(10) << left <<  acc << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}