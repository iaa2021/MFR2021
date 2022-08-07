#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string text, stars("*****");
    std::cout << "Input text:\n";
    getline(cin, text);
    cout << "\nNew text is:\n";
    text.insert(text.size() / 2, stars);
    cout << text;
    cin.get();
    return 0;
}
