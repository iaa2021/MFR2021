#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Tree.h"

int main()
{
    //1 way to convert string into char
    string sentence = "Notice that this string is modified by being broken into smaller strings (tokens).";
    cout << sentence << endl;
    char* sent1 = new char [sentence.size() + 1];
    sentence.copy(sent1, sentence.size() + 1) ;
    cout << sent1 << endl;
    cout << "Splitting sent onto the tokens.\n";
    char *ptr = strtok(sent1, ".,() ");
    while ( ptr != 0 )
    {
        cout << ptr << endl;
        ptr = strtok( 0, ".,() " );
    }
    
    //2 way to convert string into char
    string sentence2 = "We know that the strcpy() is a C function. We can avoid using that by using copy instead.";
    char *sent2 = new char[ sentence2.size() + 1 ];
    strcpy( sent2, sentence2.c_str() );
    cout << sent2 << endl;
    
    char *ptr2 = strtok( sent2, ".,() " );
    while (ptr2 != 0)
    {
        cout << ptr2 << endl;
        ptr2 = strtok( 0, ".,() " );
    }
    srand( time(0) );
    Tree<int> intTree; int a;
    for( int i = 1; i < 11; i++ )
    {
        a = rand()%100 + 1;
        intTree.insertNode( a );
    }
    cout << "Detour of tree by pre order traversal.\n";
    intTree.preOrderTraversal();
    cout << endl;
    cout << "Detour of tree by in order traversal.\n";
    intTree.inOrderTraversal();
    cout << endl;
    cout << "Detour of tree by post order traversal.\n";
    intTree.postOrderTraversal();
    cout << endl;
    return 0;
}