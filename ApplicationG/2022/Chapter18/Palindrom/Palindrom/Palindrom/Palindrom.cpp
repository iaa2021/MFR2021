#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using std::ostream_iterator;
using namespace std;
int main()
{
    string word; int l = 0;
    cout << "Input word\n";
    getline(cin, word);
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != word[word.size() - 1 - i])
        l++;
    }
    cout << "The word " << word << " size is " << word.size() << endl;
    if (l == 0)
        cout << "The word " << word << " is palindrom.\n";
    else
        cout << "The word " << word << " is not palindrom.\n";
    cout << "Exersize 18.22\n";
    string text;
    cout << "Input text\n";
    getline(cin, text);
    ostream_iterator<char> it(cout, "");
    cout << "Text in reverse direction is:\n";
    copy(text.rbegin(), text.rend(), it);
    return 0;
}
