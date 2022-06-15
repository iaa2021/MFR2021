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
void createTextFile(fstream&);
void newRecord(fstream&);
void updateRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const ClientData&);
int getAccount(const char*const);
enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };
int main()
{
    fstream inOutCredit("credit.txt", ios::in | ios::out | ios::binary);
    ClientData client;
    if (!inOutCredit)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    int choice;
    while ((choice = enterChoice()) != END)
    {
        switch (choice)
        {
        case 1:
            createTextFile(inOutCredit);
            break;
        case 2:
            updateRecord(inOutCredit);
            break;
        case 3:
            newRecord(inOutCredit);
            break;
        case 4:
            deleteRecord(inOutCredit);
            break;
        default:
            cerr << "You've entered wrong choice.\n";
            break;
        }
    }
    inOutCredit.close();
    cin.get();
    return 0;
}
int enterChoice()
{
    cout << "Enter your choice:\n1 - store a formatted text of accounts.\ncalled \"print.txt\" for printing.\n"; //to output availiable options
    cout << "2 - update an account.\n" << "3 - add a new account.\n" << "4 - delete an account.\n" << "5 - end program.\n? ";
    int menuChoice;
    cin >> menuChoice;
    return menuChoice;
}
void createTextFile(fstream& readFromFile)
{
    ofstream outPrintFile("print.txt", ios::out | ios::binary); //create formatted text file for printing
    if (!outPrintFile)
    {
        cerr << "File print.txt cannot be opened.\n";
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
void updateRecord(fstream& updateFile)
{
    int accNmb; ClientData client;
    do
    {
        cout << "Enter account number to update: ";
        cin >> accNmb;
    } while (accNmb < 1 || accNmb > 100);
    updateFile.seekg((accNmb - 1) * sizeof(ClientData));
    updateFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    cout << "Requested place contains client.getAccNumber() = " << client.getAccNumber() << endl;
    if (client.getAccNumber() != 0)
    {
        cout << "Account # " << accNmb << " contains:\n";
        outputLine(cout, client);
        double oldBalance = client.getBalance();
        double transaction;
        cout << "Enter your transaction, (+) to charge, (-) to withdraw:\n";
        cin >> transaction;
        client.setBalance(oldBalance + transaction);
        updateFile.seekp((accNmb - 1) * sizeof(ClientData));
        updateFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "Updated account contains:\n";
        outputLine(cout, client);
    }
    else
        cout << "Account # " << accNmb << " doesn't exist, so you cann't update it.\n";
}
void newRecord(fstream& newFile)
{
    int accNmb; ClientData client;
    do
    {
        cout << "Enter account number to create: ";
        cin >> accNmb;
    } while (accNmb < 1 || accNmb > 100);
    newFile.seekg((accNmb - 1) * sizeof(ClientData));
    newFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    cout << "Requested place contains client.getAccNumber() = " << client.getAccNumber() << endl;
    if (client.getAccNumber() == 0)
    {
        char lName[15]; char fName[10]; double balance;
        cout << "Input last name, first name, balance to create new account:\n";
        cin >> setw(16) >> lName >> setw(11) >> fName >> balance;
        client.setAccNumber(accNmb); client.setLastName(lName); client.setFirstName(fName); client.setBalance(balance);
        newFile.seekp((accNmb - 1) * sizeof(ClientData));
        newFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "You've created such account:\n";
        outputLine(cout, client);
    }
    else
        cout << "Account # " << accNmb << " already exists.\n";
}
void deleteRecord(fstream& deleteFile)
{
    int accNmb; ClientData client;
   
        cout << "Enter account number to delete: ";
        cin >> accNmb;
    
    deleteFile.seekg((accNmb - 1) * sizeof(ClientData));
    deleteFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    cout << "Requested place contains client.getAccNumber() = " << client.getAccNumber() << endl;
    if (client.getAccNumber() != 0)
    {
        ClientData blanc;
        deleteFile.seekp((accNmb - 1) * sizeof(ClientData));
        deleteFile.write(reinterpret_cast<const char*>(&blanc), sizeof(ClientData));
        deleteFile.seekg((accNmb - 1) * sizeof(ClientData));//checking this account's place 
        deleteFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
        cout << "Now acc # " << accNmb << " contains:\n";
        outputLine(cout, client);
    }
    else
        cout << "Account # " << accNmb << " already doesn't exist, so it cann't be deleted.\n";
}
int getAccount(const char* const prompt)
{
    int accNmb;
    do
    {
        cout << prompt << " 1 - 100:\n";
        cin >> accNmb;
    } while (accNmb < 1 || accNmb > 100);
    return accNmb;
}
void outputLine(ostream& output, const ClientData& record)
{
    output << left << setw(10) << record.getAccNumber() << setw(16) << record.getLastName() << setw(11) << record.getFirstName();
    output << setw(10) << setprecision(2) << right << fixed << showpoint << record.getBalance() << endl;
}