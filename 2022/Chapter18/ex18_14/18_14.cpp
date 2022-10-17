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
#include <set>
using std::multiset;
#include <cctype>
using std::isupper;
using std::tolower;
int main()
{
    string text; vector <string> v; multiset <string> mS1; char c;
    ostream_iterator <string> it(cout, ", ");
    cout << "Input text:\n";
    getline( cin, text );
    char *ptr = new char[text.size()];
    for (size_t i = 0; i < text.size(); i++)
    {
        ptr[i] = text.at(i);
    }
    for (size_t i = 0; i < text.size(); i++)
    {
        c = ptr[i];
        if (isupper(c))
        c = tolower(c);

        ptr[i] = c;
    }
    char *point = strtok( ptr, " ,.-" );
    while (point != NULL)
    {
        mS1.insert( point );
        point = strtok( NULL, " ,.-)(" );
    }
    cout << "Multiset consist of:\n";
    copy(mS1.begin(), mS1.end(), it);
    cout << endl;
    return 0;
}