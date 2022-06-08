#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::showpoint;
using std::left;
using std::right;
using std::ios;
using std::fixed;
using std::endl;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <fstream>
using std::ifstream;
using std::ostream;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
void outputLine(ostream&, const ClientData&);
int main()
{
    ifstream inCredit("credit.txt", ios::in);
    if (!inCredit)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    cout << left << setw(10) << "Account" << setw(16) << "Last name" << setw(11) << "First name";
    cout << setw(10) << right << "Balance" << endl;
    ClientData client;
    inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    while ( inCredit && !inCredit.eof() )
    {
        if (client.getAccNumber() > 0)
            outputLine(cout, client);
 
        inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    }
    cin.get();
    return 0;
}
void outputLine(ostream& output, const ClientData& record)
{
    output << left << setw(10) << record.getAccNumber() << setw(16) << record.getLastName() << setw(11) << record.getFirstName()
    << setw(10) << setprecision(2) << right << fixed << showpoint <<  record.getBalance() << endl;
}

