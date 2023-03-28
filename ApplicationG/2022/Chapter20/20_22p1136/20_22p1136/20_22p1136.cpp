#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Tree.h"
int main()
{
  
    srand(time(0));
    Tree<double> intTree; double a;
    for (int i = 1; i < 20; i++)
    {
        a = rand() % 100 + 1;
        intTree.insertNode(a);
    }
    cout << "Detour of tree by pre order traversal.\n";
    intTree.preOrderTraversal();
    cout << endl;
    cout << "Detour of tree by in order traversal.\n";
    intTree.inOrderTraversal();
    cout << endl;
    cout << "Detour of tree by post order traversal.\n";
    intTree.postOrderTraversal();
    cout << "\n Demonstration of levelTraversal function on intTree:\n";
    TreeNode<double>* ptr5 = intTree.getRoot();
    intTree.depth(intTree, ptr5);
    intTree.levelTraversal(intTree);
    cout << endl;
  
    
  
    intTree.levelTraversal(intTree);
    double value;
    cout << "\nInput value, you'd like to delete;\n";
    cin >> value;
    intTree.deleteNode(value);
    cout << "\n Demonstration of levelTraversal function:\n";
    intTree.levelTraversal(intTree);
    return 0;
}