#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strtok;
#include <algorithm>
using std::copy;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
using std::back_inserter;
#include <cctype>
using std::tolower;
using std::isupper;
#include <queue>
using std::deque;
int main()
{
    string text; char c; vector <string> v, p; int l = 0; string word;
    ostream_iterator <string> it(cout, ", ");
    cout << "Input text:\n";
    getline( cin, text );
    char *ptr = new char[ text.size() ];
    for (size_t i = 0; i < text.size(); i++)
    {
        ptr[i] = text.at(i);
    }
    for (size_t i = 0; i < text.size(); i++)
    {
        c = ptr[i];
        if(isupper(c))
        c = tolower(c);

        ptr[i] = c;
    }
    char *point = strtok(ptr, " ,.-?!");
    while (point != NULL)
    {
        v.push_back(point);
        point = strtok(NULL, " ,.-?!");
    }
    cout << "\nVector consist of:\n";
    copy(v.begin(), v.end(), it);
    cout << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        copy( v.at(i).rbegin(), v.at(i).rend(), back_inserter(word) );
        for (size_t j = 0; j < v.at(i).size(); j++)
        {
            if (word.at(j) != v.at(i).at(j))
            l++;
        }
        if( l == 0 )
        p.push_back(v.at(i));
        word.clear();
        l = 0;
    }
    if (p.empty())
    cout << "\nThere are no palindroms in this text.\n";
    else
    {
        cout << "\nThere are such palindroms in this text.\n";
        copy(p.begin(), p.end(), it);
    }
    cout << endl;
    delete[] ptr;
    return 0;
}
