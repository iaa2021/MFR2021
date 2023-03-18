#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string string1( "The values in any left subtree"
                    "\nare less than the value in the"
                    "\nparent node and the values in"
                    "\nany right subtree are greater"
                    "\nthan the value in the parent node" );
    cout << "Original string1 is:\n" << string1 << endl;
    // to erase all symbols from 62 position
    string1.erase( 62 );
    cout << "\nString1 after erasing till 62 position is:\n" << string1 << endl;
    cout << "\nString1 after first replacement is:\n";
    size_t position = string1.find( " " );
    while ( position != string::npos )
    {
        string1.replace( position, 1, ".");
        position = string1.find( " ", position + 1 );
    }
    cout << string1 << endl;
    cout << "\nString1 after second replacement is:\n";
    position = string1.find( "." );
    while ( position != string::npos )
    {
        string1.replace( position, 2, "xxxxx;;yyy", 5, 2 );
        position = string1.find( ".", position + 1 );
    }
    cout << string1 << endl;
    cout << "n\nInitial string is:\n";
    string1 = "The values in any left subtree"
                    "\nare less than the value in the"
                    "\nparent node and the values in"
                    "\nany right subtree are greater"
                    "\nthan the value in the parent node" ;
    cout << "\nSimple replasing is:\n";
    position = string1.find( ' ' );
    while ( position != string::npos )
    {
        string1.replace( position, 2, ";;" );
        position = string1.find( ' ', position + 1 );
    }
    cout << "\nString1 after third replacement is:\n" << string1 << endl;
    return 0;
}