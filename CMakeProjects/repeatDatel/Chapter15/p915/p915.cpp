#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
int main()
{
    char *word = "again";
    char array[ 80 ];
    string text;
    cout << "*word is: " << word << endl;
    cout << "The value of static_cast<void *>( word ) is: ";
    cout << static_cast<void *>( word ) << endl;
    cout << "The value of &word is: " << &word << endl;
    getline( cin, text );//for string text
    cout << "Text is: " << text << endl;
    cout << "Input text in array:\n";
    cin.getline( array, 80 );//for char *array
    cout << "Array is: " << array << endl;
    cout.write( array, cin.gcount() );// output char *array with counted by gcount size
    cout << "\nLast changes 28.02.2023.\n";
    return 0;
}