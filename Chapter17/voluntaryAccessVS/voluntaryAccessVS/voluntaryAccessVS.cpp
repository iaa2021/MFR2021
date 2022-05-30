#include <iostream>
using std::cerr;
using std::endl;
using std::ios;
using std::cin;
using std::cout;
#include <fstream>
using std::ofstream;
#include <cstdlib>
using std::exit;
#include "ClientData.h"
int main()
{
    ofstream outCredit("credit.txt", ios::binary);
    if (!outCredit)
    {
        cerr << "File cannot be opened.\n";
        exit(1);
    }
    ClientData blankClient;
    for (int i = 0; i < 100; i++)
    {
        outCredit.write(reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
    }
    cout << "\nThe work is done.\n";
    cin.get();
    return 0;
}
