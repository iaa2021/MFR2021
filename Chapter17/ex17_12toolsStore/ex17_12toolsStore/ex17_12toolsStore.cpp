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
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "Tools.h"
void writeDownGoods(fstream&);
void outputLine(ostream&, const Tools&);
void createTextFile(fstream&);
int main()
{
    fstream onStore("store.txt", ios::in | ios::out | ios::binary);
    int gNumber, gQuantity, choice; string gName; double gPrice;
    if (!onStore.is_open())
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    cout << "Input your choice:\n1 - to write down goods,\n2 - to create text file,\n0 to end input:\n? ";
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
            default:
                cout << "You've entered wrong choice.";
            break;
        }
        cout << "Input your choice:\n1 - to write down goods , 0 to end input:\n? ";
        cin >> choice;
    }
    cin.get();
    return 0;
}
void writeDownGoods(fstream& wareHouse)
{
    int gNumber, gQuantity, choice; string gName; double gPrice; Tools store;
    cout << "Input tool's number, 0 to end input:\n? ";
    cin >> gNumber;
    wareHouse.seekg((gNumber + 1) * sizeof(Tools));
    wareHouse.read(reinterpret_cast<char*>(&store), sizeof(Tools));
    if (store.getNumber() == 0)
    {
        cout << "Input good's name, quantity, price:\n";
        cin >> gName >> gQuantity >> gPrice;
        store.setNumber(gNumber); store.setName(gName); store.setQuantity(gQuantity); store.setPrice(gPrice);
        wareHouse.seekp((gNumber + 1) * sizeof(Tools));
        wareHouse.write(reinterpret_cast<const char*>(&store), sizeof(Tools));
    }
    else
        cout << "Position # " << gNumber << " is already occupied.\n";
}
void outputLine(ostream& output, const Tools &good)
{
    cout << fixed << showpoint;
    output << left << setw(5) << good.getNumber() << setw(20) << good.getName() << setw(10) << setprecision(2) << good.getPrice() << right << setw(5) << good.getQuantity() << endl;
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
    textFile << left << setw(5) << "Number" << setw(20) << "Name" << setw(10) << "Price" << right << setw(5) << "Quantity" << endl;
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