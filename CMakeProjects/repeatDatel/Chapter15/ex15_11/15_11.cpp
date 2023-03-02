#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
#include <string>
using std::string;
int main()
{
    char array[ 80 ]; int a;
    cout << "Input string in array:\n";
    cin.getline( array, 80 );
    cout << "\narray is:\n";
    cout.write( array, cin.gcount() );
    cout << "\nArray's size is: " << cin.gcount() << endl;
    string text;
    cout << "Input string:\n";
    getline( cin, text );
    cout << "String is:\n" << text << endl;
    cout << "String's size is: " << text.size() << endl;
    cout << "Input integer: ";
    cin >> a; cout << boolalpha;
    if( cin.fail() )
    {
        cout << "cin.fail() is " << cin.fail() << endl;
        cin.clear();
        cout << "Now cin.fail() is " << cin.fail() << endl;
    }
    return 0;
}