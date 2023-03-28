#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw;
#include<cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include "Tree.h"
#include "config.h"
int main()
{
    srand( time( 0 ) );
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Tree<int> intTree; int value;
    intTree.printVersion();
    for (size_t i = 0; i < 10; i++)
    {
        value = rand()%100 + 1;
        intTree.insertNode( value );
    }
    cout << "\nPassage integer tree pre order:\n";
    intTree.preOrderTraversal();
    cout << "\nPassage integer tree in order:\n";
    intTree.inOrderTraversal();
    cout << "\nPassage integer tree post order:\n";
    intTree.postOrderTraversal();
    cout << fixed << setprecision( 2 );
    Tree<double> doubleTree; double value1, value2 = 100;
    for (size_t i = 0; i < 10; i++)
    {
        value1 = static_cast<double>( ( rand()%1000 + 1 ) / value2 );
        doubleTree.insertNode( value1 );
    }
    cout << "\nPassage double tree pre order:\n";
    doubleTree.preOrderTraversal();
    cout << "\nPassage double tree in order:\n";
    doubleTree.inOrderTraversal();
    cout << "\nPassage double tree post order:\n";
    doubleTree.postOrderTraversal();
    return 0;
}
