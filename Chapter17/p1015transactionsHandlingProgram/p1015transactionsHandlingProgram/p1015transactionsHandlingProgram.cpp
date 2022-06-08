#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::fixed;
using std::showpoint;
using std::left;
using std::right;
#include <fstream>
using std::ostream;
using std::fstream;
using std::ofstream;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
int enterChoice();
void createTextFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const ClientData&);
int getAccount(const char*const);
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };
int main()
{
    std::cout << "Hello World!\n";
}
int enterChoice()
{
    //to output availiable options
    cout << "Enter your choice:\n1 - store a formatted text of accounts.\ncalled \"print.txt\" for printing.\n";
    cout << "2 - update an account.\n" << "3 - add a new account.\n" << "4 - delete an account.\n" << "5 - end program.\n? ";
    int menuChoice;
    cin >> menuChoice;
    return menuChoice;
}
void createTextFile(fstream& readFromFile)
{
    //create text file
    ofstream outPrintFile("print.txt", ios::out);
    if (!outPrintFile)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    outPrintFile << left << setw(10) << "Account" << setw(16) << "Last Name" << setw(11) << "First Name" << right << setw(10) << "Balance" << endl;
    readFromFile.seekg(0);
    ClientData client;
    readFromFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    while (!readFromFile.eof())
    {
        if (client.getAccNumber() != 0)
            outputLine(outPrintFile, client);

        readFromFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    }
}
void updateRecord(fstream& updateFile)
{
    //to get account number
    int accNmb = getAccount("Enter account to update:\n");
    updateFile.seekg((accNmb - 1) * sizeof(ClientData) );
    ClientData client;
    updateFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    //to update record
    if (client.getAccNumber() != 0)
    {
        outputLine(cout, client); //to output record
        //to ask user about kind of transaction
        cout << "Enter charge(+) or payment(-): ";
        double transaction;
        cin >> transaction;
        double oldBalance = client.getBalance();
        client.setBalance(oldBalance + transaction);
        outputLine(cout, client); //to output updated record
        updateFile.seekp((accNmb - 1) * sizeof(ClientData));
        updateFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
    }
    else
        cerr << "Account #" << accNmb << " has no information.\n";
}
