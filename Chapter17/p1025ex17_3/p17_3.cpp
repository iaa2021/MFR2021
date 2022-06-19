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
void inputClientsDataBase(fstream &);
int enterChoice(string);
int main()
{
    fstream OldMaster( "oldmast.odt", ios::out | ios::in );
    if (!OldMaster)
    {
        cerr << "File oldmast.odt cannot be opened.\n";
        exit(1);
    }
    ofstream Transaction( "trams.odt", ios::out );
     if (!Transaction)
    {
        cerr << "File trans.odt cannot be opened.\n";
        exit(1);
    }
    fstream NewMaster( "newmast.odt", ios::out );
     if (!NewMaster)
    {
        cerr << "File newmast.odt cannot be opened.\n";
        exit(1);
    }
    cout << "Work started.\n";
    cin.get();
    return 0;
}
void outputLine( int acc, const string name, double balance )
{
  cout << setw(10) << left <<  acc << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}
int enterChoice()
{
    cout  << "Input your choice:\n1 - to fulfill client's accounts database;\n";
    cout << "2 - to fulfill transactions database;\n3 - to update new client's accounts database.\n";
    int choice;
    do
    {
        cin >> choice;
    } while (choice <= 0);
    return choice;
}
void inputClientsDataBase(fstream &dBase, int a, string n, double b)
{
    dBase << left << setw(10) << "Account" << setw(13) << "Name" << setw(10) << "Balance" << endl;
    cout << "Input account's number, 0 to end input:\n? ";
    cin >> a;
    while (a >= 0)
    {
        cout << "Input name, balance:\n? ";
        cin >> setw(13) >> n >> setw(10) >> b;
        dBase << setw(10) << a << setw(13) << n << setw(10) << b << endl;
        cout << "Input account's number, 0 to end input:\n? ";
    }
    
}