#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strcmp;
int main()
{
    string text, text1;
    cout << "Input text:\n";
    cin >> text;
    for ( size_t i = text.size(); i >= 0; i-- )
    {
        text1 += text[ i ];
    }
    cout << text1 << endl;
    return 0;
}