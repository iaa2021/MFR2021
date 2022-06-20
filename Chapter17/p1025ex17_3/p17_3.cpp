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
#include<vector>
using std::vector;
void outputLine( int, const string, double );
void inputClientsDataBase( ofstream &, int, char *, char *, double );
void inputTransactionBase( ofstream &, int, double );
void insertDbaseInVector( ifstream &, vector< vector<double> >, int, double);
int main()
{
    ofstream OldMaster; ifstream inOldMaster;
    ofstream Transaction; ifstream inTransaction;
    ofstream NewMaster( "newmast.txt", ios::out );
     if (!NewMaster)
    {
        cerr << "File newmast.txt cannot be opened.\n";
        exit(1);
    }
    int choice, accNmb; char fName[10]; char lName[15]; double balance, transaction;
    vector< vector<double> > dBaseAccsBalanses;
    cout  << "Input your choice:\n1 - to fill client's accounts database;\n";
    cout << "2 - to fulfill transactions database;\n4 - to update new client's accounts database.\n";
    cout << "3 - to insert database in corresponding vector;\n0 - to end input:\n? "; cin >> choice;
    while ( choice != 0 )
    {
        switch ( choice )
        {
        case 1:
            OldMaster.open( "oldmast.txt", ios::out );
            if (!OldMaster)
            {
                cerr << "File oldmast.txt cannot be opened.\n";
                exit(1);
            }
            inputClientsDataBase( OldMaster, accNmb, fName, lName, balance );
            OldMaster.clear(); OldMaster.close();
            break;
        case 2:
            Transaction.open( "trams.txt", ios::out );
            if (!Transaction)
            {
                cerr << "File trans.txt cannot be opened.\n";
                exit(1);
            }
            inputTransactionBase( Transaction, accNmb, transaction );
            Transaction.clear(); Transaction.close();
            break;
        case 3:
            inOldMaster.open( "oldmast.txt", ios::in );
            if (!inOldMaster)
            {
                cerr << "File oldmast.txt cannot be opened by inOldMaster.\n";
                exit(1);
            }
            insertDbaseInVector( inOldMaster, dBaseAccsBalanses, accNmb, balance  );
            inOldMaster.clear(); inOldMaster.close();
        default:
            cout << "You've entered wrong choice:\n";
            break;
        }
        cout  << "Input your choice:\n1 - to fulfill client's accounts database;\n";
        cout << "2 - to fill transactions database;\n4 - to update new client's accounts database.\n";
        cout << "3 - to insert database in corresponding vector;\n0 - to end input:\n? "; cin >> choice;
    }
    cout << "Vector containing accs and balanses looks like:\n";
    cout << dBaseAccsBalanses.size() << endl;
    cin.get();
    return 0;
}
void outputLine( int acc, string name, double balance )
{
  cout << setw(10) << left <<  acc << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}
void inputClientsDataBase(ofstream &dBase, int a, char *fN, char *lN, double b)
{
    dBase << left << setw(10) << "Account" << setw(11) << "First name" << setw(16) << "Last name" << setw(10) << "Balance" << endl;
    cout << "Input account's number 0 to end input:\n? ";
    cin >> a; 
    while( a != 0 )
    {
        cout << "Input first name, last name, balance:\n? ";
        cin >> fN >> lN >> b;
        dBase << setw(10) << a << setw(11) << fN << setw(16) << lN << setw(10) << b << endl;
        cout << "Input account's number 0 to end input:\n? ";
        cin >> a;
    }
    
}
void inputTransactionBase( ofstream &tBase, int a, double t )
{
    tBase << left << setw(10) << "Account" <<  setw(10) << "Transaction" << endl;
    cout << "Input account's number 0 to end input:\n? ";
    cin >> a; 
    while( a != 0 )
    {
        cout << "Input sum of transaction:\n? ";
        cin >> t;
        tBase << setw(10) << a << setw(10) << t << endl;
        cout << "Input account's number 0 to end input:\n? ";
        cin >> a;
    }
}
void insertDbaseInVector( ifstream &dBase, vector< vector<double> >dBaseVector, int a, double b)
{
    int i = 0;
    while ( dBase >> a >> b )
    {
        dBaseVector[i].push_back(a); dBaseVector[i].push_back(b); 
        dBaseVector.push_back( dBaseVector[i] );
        i++;
    }
}