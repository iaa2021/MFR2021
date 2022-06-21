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
void outputLine(ostream &, int, char*, char*, double);

int main()
{
    int accNmb; char fN[10]; char lN[15]; double balance;
    ofstream oldMaster("oldmast.txt", ios::app);
    if (!oldMaster)
    {
        cerr << "File oldmast.txt cannot be opened by oldMaster.\n";
        exit(1);
    }
    
    cout << "Input account number, 0 to end input:\n? ";
    cin >> accNmb;
    while (accNmb != 0)
    {
        cout << "Input first name, last name, balance:\n? ";
        cin >> setw(10) >> fN >> setw(15) >> lN >> setw(10) >> balance;
        oldMaster << left << setw(5) << accNmb << setw(11) << fN << setw(16) << lN << setw(10) << right << balance << endl;
        cout << "Input account number, 0 to end input:\n? ";
        cin >> accNmb;
    }
    oldMaster.close();
    ifstream inOldMaster("oldmast.txt", ios::in);
    if (!inOldMaster)
    {
        cerr << "File oldmast.txt cannot be opened by inOldMaster.\n";
        exit(1);
    }
    else
        cout << "File oldmast.txt is opened by inOldMaster.\n";

    cout << "Account " << " First name " << " Last name " << " Balance " << endl;
    cout << fixed << showpoint;

    while (inOldMaster >> accNmb >> fN >> lN >> balance)
    {
        outputLine( cout, accNmb, fN, lN, balance);
    }

    return 0;
}
void outputLine( ostream &output, int a, char* f, char* l, double b)
{
    output << left << setw(5) << a << setw(11) << f << setw(16) << l << setw(10) << right << b << endl;
}