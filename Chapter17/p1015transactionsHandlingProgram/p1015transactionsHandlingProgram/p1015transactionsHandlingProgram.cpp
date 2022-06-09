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
void newRecord(fstream&);
void updateRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const ClientData&);
int getAccount(const char*const);
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };
int main()
{
    fstream inOutCredit("credit.txt", ios::in | ios::app);
    if (!inOutCredit)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    int choice;
    cout << "Input your choice" << endl;
    while ( (choice = enterChoice()) != END  )
    {
        switch (choice)
        {
        case PRINT:
            createTextFile(inOutCredit);
            break;
        case UPDATE:
            updateRecord(inOutCredit);
            break;
        case NEW:
            newRecord(inOutCredit);
            break;
        case DELETE:
            deleteRecord(inOutCredit);
            break;
        default:
            cerr << "You've entered wrong choice.\n";
            break;
        }
        inOutCredit.clear();
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
void createTextFile(fstream& readFromFile)
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
void newRecord(fstream& insertInFile)
{
    int accNmb = getAccount("Enter account to insert:\n");
    ClientData client;
    insertInFile.seekg((accNmb - 1) * sizeof(ClientData));
    insertInFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
        cout << "Account #" << accNmb << " already contains information.\n";
    else
    {
        char lName[15]; char fName[10]; double balance;
        cout << "Input last name, first name, balance:\n";
        cin >> setw(15) >> lName; cin >> setw(10) >> fName; cin >> balance;
        client.setAccNumber(accNmb);
        client.setLastName(lName);
        client.setFirstName(fName);
        client.setBalance(balance);
        insertInFile.seekp((accNmb - 1) * sizeof(ClientData));
        insertInFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
    }
}
void updateRecord(fstream& updateFile)
{
    int accNmb = getAccount("Enter account number to update:\n");
    updateFile.seekg((accNmb - 1) * (sizeof(ClientData)));
    ClientData client;
    updateFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        outputLine(cout, client);//output old record
        double oldBalance = client.getBalance();
        double transaction;
        cout << "Input your transaction: (+) charge, (-) payment:\n";
        cin >> transaction;
        client.setBalance(oldBalance + transaction);
        outputLine(cout, client);//output new record
        updateFile.seekp((accNmb - 1) * (sizeof(ClientData)));
        updateFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
    }
    else
        cerr << "Account # " << accNmb << " has no information.\n";
}
void deleteRecord(fstream& deleteFromFile)
{
    int accNmb = getAccount("Enter account to delete:\n");
    deleteFromFile.seekg((accNmb - 1) * (sizeof(ClientData)));
    ClientData client;
    deleteFromFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        ClientData blank;
        deleteFromFile.seekp((accNmb - 1) * sizeof(ClientData));
        deleteFromFile.write(reinterpret_cast<const char*>(&blank), sizeof(ClientData));
        cout << "Account # " << accNmb << " deleted.\n";
    }
    else
        cerr << "Account # " << accNmb << " doesn't exists.\n";
}
int getAccount(const char* const prompt)
{
    int accNmb;
    do
    {
        cout << prompt << " 1 - 100, 0 to end input\n";
        cin >> accNmb;
    } while (accNmb > 0 && accNmb <= 100);
    return accNmb;
}
void outputLine( ostream& output, const ClientData& record )
{
    output << left << setw(10) << record.getAccNumber() << setw(16) << record.getLastName() << setw(11) << record.getFirstName();
    output << setw(10) << setprecision(2) << right << fixed << showpoint << record.getBalance() << endl;
}