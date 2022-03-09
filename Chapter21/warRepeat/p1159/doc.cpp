#include "DeskOfCards.h"
#include <iostream>
using std::endl;
using std::cout;
int main()
{
    DeskOfCards doc;
    doc.shuffle();
    doc.deal();
    cout << endl;
    return 0;
};