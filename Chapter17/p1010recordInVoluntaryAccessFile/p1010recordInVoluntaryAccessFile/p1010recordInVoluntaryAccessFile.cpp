#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;
#include <fstream>
using std::fstream;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
int main()
{
    int accNmb; char lname[15]; char fname[10]; double cBalance;
    fstream outCredit("credit.txt", ios::in | ios::app | ios::binary);
    if (!outCredit)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    cout << "Enter account number 1 - 100, 0 to end input:\n";
    cin >> accNmb;
    ClientData client;
    while ( accNmb > 0 && accNmb <= 100 )
    {
        cout << "\nEnter last name, first name, balance:\n?";
        cin >> setw( 15 ) >> lname >> setw(10) >> fname >> cBalance;
        client.setAccNumber(accNmb);
        client.setLastName(lname);
        client.setFirstName(fname);
        client.setBalance(cBalance);
        outCredit.seekp((client.getAccNumber() - 1) * sizeof(ClientData));
        outCredit.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "Enter account number 1 - 100, 0 to end input:\n";
        cin >> accNmb;
    }
    cin.get();
    return 0;
}


