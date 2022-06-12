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
using std::ifstream;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
int enterChoice();
void createTextFile(ifstream&);
void newRecord(ifstream&, ofstream&);
void updateRecord(ifstream&, ofstream&);
void deleteRecord(ifstream&, ofstream&);
void outputLine(ostream&, const ClientData&);
int getAccount(const char*const);
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };
int main()
{
    ifstream inCredit("credit.txt", ios::in | ios::binary);
    if (!inCredit)
    {
        cerr << "File by inCredit cannot be opened.\n";
        exit(1);
    }
    ofstream onCredit("credit.txt", ios::app | ios::binary);
    if (!onCredit)
    {
        cerr << "File by onCredit cannot be opened.\n";
        exit(1);
    }
    ClientData client;
    

    int choice;
    cout << "Input your choice" << endl;
    while ( (choice = enterChoice()) != END  )
    {
        switch (choice)
        {
        case PRINT:
            createTextFile(inCredit);
            break;
        case UPDATE:
            updateRecord(inCredit, onCredit);
            break;
        case NEW:
            newRecord(inCredit, onCredit);
            break;
        case DELETE:
            deleteRecord(inCredit, onCredit);
            break;
        default:
            cerr << "You've entered wrong choice.\n";
            break;
        }
        inCredit.clear(); onCredit.clear();
    }
    return 0;
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
void createTextFile(ifstream& readFromFile)
{
    ofstream outPrintFile("print.txt", ios::out); //create formatted text file for printing
    if (!outPrintFile)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    outPrintFile << left << setw(10) << "Account" << setw(16) << "Last name" << setw(11) << "First name" << right << setw(10) << "Balance" << endl;
    ClientData client;
    readFromFile.seekg(0);
    readFromFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    while (!readFromFile.eof())
    {
        if (client.getAccNumber() != 0)
            outputLine(outPrintFile, client);

        readFromFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    }
}
void newRecord(ifstream& inFile, ofstream& onFile)
{
    int accNmb = getAccount("Enter account number to create:\n");
    cin >> accNmb;
    ClientData client;
    inFile.seekg((accNmb - 1) * sizeof(ClientData));
    inFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    inFile.close(); inFile.clear();
    if (client.getAccNumber() == 0)
    {
        char lName[15]; char fName[10]; double balance;
        cout << "Enter last name, first name, balance:\n";
        cin >> setw(16) >> lName >> setw(11) >> fName >> balance;
        client.setAccNumber(accNmb); client.setLastName(lName); client.setFirstName(fName); client.setBalance(balance);
        onFile.seekp((accNmb - 1) * sizeof(ClientData));
        onFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "Created account is:\n";
        outputLine(cout, client);
    }
    else
        cerr << "Account already contains information.\n";
}
void updateRecord(ifstream& inFile, ofstream& onFile)
{
    int accNmb = getAccount("Enter account to update:\n");
    ClientData client;
    inFile.seekg((accNmb - 1) * sizeof(ClientData));
    inFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        cout << "The state of an account # " << accNmb << " is:\n";
        outputLine(cout, client);
        double transaction; double oldBalance = client.getBalance();
        cout << "Input your transaction (+) to top up your account, (-) to withdraw money from account:\n";
        cin >> transaction;
        client.setBalance(oldBalance + transaction);
        onFile.seekp((accNmb - 1) * sizeof(ClientData));
        onFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "The state of updated account # " << accNmb << " is:\n";
        outputLine(cout, client);
    }
    else
        cerr << "Account # " << accNmb << " doesn't exist.\n";
}
void deleteRecord(ifstream& inFile, ofstream& onFile)
{
    int accNmb = getAccount("Enter account to delete:\n");
    ClientData client;
    inFile.seekg((accNmb - 1) * sizeof(ClientData));
    inFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        ClientData blank;
        onFile.seekp((accNmb - 1) * sizeof(ClientData));
        onFile.write(reinterpret_cast<const char*>(&blank), sizeof(ClientData));
        cout << "Account # " << accNmb << " deleted.\n";
    }
    else
        cerr << "Account # " << accNmb << " doesn't exist.\n";
}
int getAccount(const char* const prompt)
{
    int accNmb;
    do
    {
        cout << prompt << " 1 - 100, 0 to end input\n";
        cin >> accNmb;
    } while (accNmb < 1 || accNmb > 100);
    return accNmb;
}
void outputLine( ostream& output, const ClientData& record )
{
    output << left << setw(10) << record.getAccNumber() << setw(16) << record.getLastName() << setw(11) << record.getFirstName();
    output << setw(10) << setprecision(2) << right << fixed << showpoint << record.getBalance() << endl;
}