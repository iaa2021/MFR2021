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
int main()
{
    string text; vector <string> v;
    ostream_iterator <string> it(cout, ", ");
    cout << "Input text:\n";
    getline( cin, text );
    char *ptr = new char[text.size()];
    for (size_t i = 0; i < text.size(); i++)
    {
        ptr[i] = text.at(i);
    }
    char *point = strtok( ptr, " ,.-" );
    while (point != NULL)
    {
        v.push_back( point );
        point = strtok( NULL, " ,.-)(" );
    }
    cout << "Vector consist of:\n";
    copy(v.begin(), v.end(), it);
    return 0;
}