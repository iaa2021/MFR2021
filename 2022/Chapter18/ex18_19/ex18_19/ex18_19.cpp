#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include<algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <cstring>
using std::strtok;
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
    cout << "\nCompliting exersize 18.20.\n";
    string text2; vector<string>v;
    ostream_iterator<string> it(cout, ", ");
    cout << "Input text2:\n";
    getline(cin, text2);
    char* ptr = new char[text2.size()];
    char* nextTkn = NULL;
    for (size_t i = 0; i < text2.size(); i++)
    {
        ptr[i] = text2.at(i);
    }
    char* delim = strtok_s( ptr, " ,.-)(!?", &nextTkn );
    while ( delim != NULL )
    {
        v.push_back(delim);
        delim = strtok_s(NULL, " ,.-)(!?", &nextTkn);
    }
    cout << "Text2 delimited on the tokens is:\n";
    copy(v.begin(), v.end(), it);
    cout << endl;
    delete[] ptr;
    cin.get();
    return 0;
}
