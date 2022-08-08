#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string text, stars("*****");
    cout << "Input text:\n";
    getline(cin, text);
    cout << "\nNew text is:\n";
    text.insert(text.size() / 2, stars);
    cout << text;
    cout << "\nCompliting exersize 18.19.\n";
    string text1;
    cout << "Input text1:\n";
    getline(cin, text1);
    for (size_t i = 0; i < text1.size(); i++)
    {
        if ((text1.at(i) == 'b' && text1.at(i + 1) == 'y') || (text1.at(i) == 'B' && text1.at(i + 1) == 'Y'))
            text1.erase(i, 2);
    }
    cout << "\nNew text is:\n" << text1 << endl;
    cin.get();
    return 0;
}
