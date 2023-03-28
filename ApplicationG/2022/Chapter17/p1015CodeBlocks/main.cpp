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
    fstream inOutCredit("credit.txt", ios::app | ios::in | ios::binary);
    if (!inOutCredit)
    {
        cerr << "File credin.txt cannot be opened.\n";
        exit(1);
    }
    ClientData client;
    int choice;
    cout << "Input your choice" << endl;
    while ((choice = enterChoice()) != END)
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

    }
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
    ofstream outPrintFile("print.txt", ios::out); //create formatted text file for printing
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
void newRecord(fstream& newFile)
{
    int accNmb = getAccount("Enter account number to create:\n");
    cin >> accNmb;
    ClientData client;
    newFile.seekg((accNmb - 1) * sizeof(ClientData));
    newFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() == 0)
    {
        char lName[15]; char fName[10]; double balance;
        cout << "Enter last name, first name, balance:\n";
        cin >> setw(16) >> lName >> setw(11) >> fName >> balance;
        client.setAccNumber(accNmb); client.setLastName(lName); client.setFirstName(fName); client.setBalance(balance);
        newFile.seekp((accNmb - 1) * sizeof(ClientData));
        newFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "Created account is:\n";
        outputLine(cout, client);
    }
    else
        cerr << "Account already contains information.\n";
}
void updateRecord(fstream& updateFile)
{
    int accNmb = getAccount("Enter account to update:\n");
    ClientData client;
    updateFile.seekg((accNmb - 1) * sizeof(ClientData));
    updateFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        cout << "The state of an account # " << accNmb << " is:\n";
        outputLine(cout, client);
        double transaction; double oldBalance = client.getBalance();
        cout << "Input your transaction (+) to top up your account, (-) to withdraw money from account:\n";
        cin >> transaction;
        client.setBalance(oldBalance + transaction);
        updateFile.seekp((accNmb - 1) * sizeof(ClientData));
        updateFile.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
        cout << "The state of updated account # " << accNmb << " is:\n";
        outputLine(cout, client);
    }
    else
        cerr << "Account # " << accNmb << " doesn't exist.\n";
}
void deleteRecord(fstream& deleteFile)
{
    int accNmb = getAccount("Enter account to delete:\n");
    ClientData client;
    deleteFile.seekg((accNmb - 1) * sizeof(ClientData));
    deleteFile.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    if (client.getAccNumber() != 0)
    {
        ClientData blank;
        deleteFile.seekp((accNmb - 1) * sizeof(ClientData));
        deleteFile.write(reinterpret_cast<const char*>(&blank), sizeof(ClientData));
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
        cout << prompt << " 1 - 100: ";
        cin >> accNmb;
    } while (accNmb < 1 || accNmb > 100);
    return accNmb;
}
void outputLine(ostream& output, const ClientData& record)
{
    output << left << setw(10) << record.getAccNumber() << setw(16) << record.getLastName() << setw(11) << record.getFirstName();
    output << setw(10) << setprecision(2) << right << fixed << showpoint << record.getBalance() << endl;
}
