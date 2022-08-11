#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strtok;
#include <iterator>
using std::ostream_iterator;
using std::back_inserter;
#include <algorithm>
using std::copy;
#include <vector>
using std::vector;
int main()
{
    string text; int l; 
    cout << "Input text:\n";
    getline(cin, text);
    char* ptr = new char[text.size()];
    for (size_t i = 0; i < text.size(); i++)
    {
        ptr[i] = text.at(i);
    }
    cout << "array is:\n";
    for (size_t i = 0; i < text.size(); i++)
    {
        cout << ptr[i];
    }
    cout << endl;
    return 0;
}

