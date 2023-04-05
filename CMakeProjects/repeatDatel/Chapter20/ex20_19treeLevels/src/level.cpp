#include "tree.h"
#include "treeNode.h"
#include "config.h"
#include <cstdlib>
using std::srand;
using std::rand;
#include <ctime>
using std::time;
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    tree<int>::printVersion();
    srand( time( 0 ) );
    tree<int> intTree; int number;
    for ( int i = 0; i < 10; i++ )
    {
        number = rand()%100 + 1;
        intTree.insertNode( number );
    }
    cout << "\nPass int tree in order:\n";
    intTree.inOrderTraversal();
    cout << "\nPass int tree in preorder:\n";
    intTree.preOrderTraversal();
    cout << "\nPass int tree in postorder:\n";
    intTree.postOrderTraversal();
    cout << endl;
    return 0;
}