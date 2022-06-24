#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;
#include<fstream>
using std::fstream;
using std::ostream;
using std::ofstream;
using std::istream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "Tools.h"
void writeDownGoods(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const Tools&);
void createTextFile(fstream&);
int main()
{
    fstream onStore("store.txt", ios::in | ios::out);
    int choice; Tools good;
    if (!onStore.is_open())
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    cout << "Input your choice:\n1 - to write down goods,\n2 - to create text file,\n3 - to delete record,\n0 - to end input:\n? ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            writeDownGoods(onStore);
            break;
        case 2:
            createTextFile(onStore);
            break;
        case 3:
            deleteRecord(onStore);
            break;
        default:
            cout << "You've entered wrong choice.";
            break;
        }
        cout << "Input your choice:\n1 - to write down goods,\n2 - to create text file,\n3 - to delete record,\n0 - to end input:\n? ";
        cin >> choice;
        onStore.clear();// reset the eof indicator
    }
    cout << "Store has such goods:\n";
    onStore.seekg(0);
    onStore.read(reinterpret_cast<char*>(&good), sizeof(Tools));
    while (!onStore.eof())
    {
        if (good.getNumber() != 0)
            cout << good.getNumber() << "  " << good.getName() << "  " << good.getPrice() << "  " << good.getQuantity() << endl;
        onStore.read(reinterpret_cast<char*>(&good), sizeof(Tools));
    }
    cin.get();
    return 0;

}
void writeDownGoods(fstream& wareHouse)
{
    int gNumber; int gQuantity; string gName; double gPrice; Tools store;
    cout << "Input tool's number, 0 - to end input:\n? ";
    cin >> gNumber;
    wareHouse.seekg((static_cast<long long>(gNumber) + 1) * sizeof(Tools));
    wareHouse.read(reinterpret_cast<char*>(&store), sizeof(Tools));
    if (store.getNumber() == 0)
    {
        cout << "Input good's name:\n? ";
        cin >> gName;
        cout << "Input quantity\n? "; 
        cin >> gQuantity;
        cout << "Input price:\n";
        cin >> gPrice;
        store.setNumber(gNumber); store.setName(gName); store.setQuantity(gQuantity); store.setPrice(gPrice);
        wareHouse.seekp((static_cast<long long>(gNumber) + 1) * sizeof(Tools));
        cout << "You've entered such product:\n";
        outputLine(cout, store);
        wareHouse.write(reinterpret_cast<const char*>(&store), sizeof(Tools));
    }
    else
        cout << "Position # " << gNumber << " is already occupied.\n";
}
void outputLine(ostream& output, const Tools &good)
{
    output << left << setw(10) << good.getNumber() << setw(30) << good.getName() << setw(10) << setprecision(2) << fixed << showpoint << good.getPrice() << right << setw(5) << good.getQuantity() << endl;
}
void createTextFile(fstream& readFF)
{
    Tools store;
    ofstream textFile("list.txt", ios::out);
    if (!textFile.is_open())
    {
        cerr << "Text file cannot be opened.\n";
        exit(1);
    }
    textFile << left << setw(10) << "Number" << setw(30) << "Name" << setw(10) << "Price" << right << setw(5) << "Quantity" << endl;
    readFF.seekg(0);
    readFF.read(reinterpret_cast<char*>(&store), sizeof(Tools));
    while (!readFF.eof())
    {
        if (store.getNumber() != 0)
        {
            outputLine(textFile, store);
        }
        readFF.read(reinterpret_cast<char*>(&store), sizeof(Tools));
    }
}
void deleteRecord(fstream& delFile)
{
    int number; Tools good;
    cout << "Input position's number, you'd like to delete:\n? ";
    cin >> number;
    delFile.seekg((static_cast<long long>( number  ) - 1) * sizeof(Tools));
    delFile.read(reinterpret_cast<char*>(&good), sizeof(Tools));
    cout << "Position is " << good.getNumber() << endl;
    if (good.getNumber() != 0)
    {
        cout << "You'd like to delete such record:\n";
        outputLine(cout, good);
        Tools emptyLine;
        delFile.seekp((static_cast<long long>(number) - 1) * sizeof(Tools));
        delFile.write(reinterpret_cast<const char*>(&emptyLine), sizeof(Tools));
    }
    else
        cout << "Position # " << number << " is empty.\n";
}