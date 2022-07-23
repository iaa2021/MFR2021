#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string text;
    cout << "Input text:\n";
    getline(cin, text);
    for (size_t i = 0; i < text.size(); i++)
    {
        if ( text.at(i) >= 'A' && text.at(i) <= 'Z')
        {
            text.at(i) += 'a' - 'A';
        }
        else
        {
            text.at(i) -= 'a' - 'A';
        }
    }
    cout << "Reverse direction is:\n";
    for (int i = text.size() - 1; i >= 0; i--)
    {
        cout << text.at(i);
    }
    cout << "\nThe task is complete.\n";
    cin.get();
    return 0;
}

