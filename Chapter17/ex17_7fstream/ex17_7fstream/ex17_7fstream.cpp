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
void outputLine( int, string, string, double);

int main()
{
    int accNmb; string fN; string lN; double balance;
    fstream oldMaster;
    oldMaster.open("oldmast.txt", ios::app);
    if (oldMaster.is_open())
    {
        cout << "Input account number, 0 to end input:|n? ";
        cin >> accNmb;
        while (accNmb != 0)
        {
            cout << "Input first name, last name, balance:|n? ";
            cin >> fN >> lN >> balance;
            cout << "Input account number, 0 to end input:|n? ";
            cin >> accNmb;
        }
        oldMaster.close();
    }
    else
        cout << "File cannot be opened by ios::app object.\n";
    oldMaster.open("oldmast.txt", ios::in);
    if (oldMaster.is_open())
    {
        while (oldMaster >> accNmb >> fN >> lN >> balance)
        {
            outputLine( accNmb, fN, lN, balance);
            cout << left << setw(5) << accNmb << setw(11) << fN << setw(16) << lN << setw(10) << right << balance << endl;
        }
        oldMaster.close();
    }
    else
        cout << "File cannot be opened by ios::in object.\n";
    

    return 0;
}
void outputLine( int a, string f, string l, double b)
{
    cout << left << setw(5) << a << setw(11) << f << setw(16) << l << setw(10) << right << b << endl;
}