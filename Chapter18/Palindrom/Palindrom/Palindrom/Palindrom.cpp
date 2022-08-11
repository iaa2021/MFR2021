#include <iostream>
#include <string>
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
    return 0;
}
