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
#include <iterator>
using std::back_inserter;
using std::ostream_iterator;
#include <vector>
using std::vector;
int main()
{
    string text; ostream_iterator <string> it(cout, ", "); vector <string> v, pals; int l = 0;
    cout << "Input text:\n";
    getline(cin, text);
    char *ptr = new char[ text.size() ];
    for (size_t i = 0; i < text.size(); i++)
    {
        ptr[i] = text.at(i);
    }
    cout << "Array is:\n";
    for (size_t i = 0; i < text.size(); i++)
    {
        cout << ptr[i];
    }
    cout << endl;
    char *delim = strtok( ptr, " ,.-!?" );
    while (delim != NULL)
    {
        v.push_back(delim);
        delim = strtok( NULL, " ,.-!?" );
    }
    cout << "\nVector is:\n";
    copy( v.begin(), v.end(), it );
    for ( size_t i = 0; i < v.size(); i++ )
    {
        for ( size_t j = 0; j < v.at(i).size(); j++ )
        {
            if ( v.at(i).at(j) != v.at(i).at( v.at(i).size() - 1 - j ) )
                l++;            
        }
        if ( l == 0 )
        pals.push_back(v.at(i));    
        l = 0;    
    }
    if (pals.empty())
    cout << "\nThere are not palindroms in this text.\n";
    else
    cout << "\nThere are such palindroms in this text.\n";
    copy(pals.begin(), pals.end(), it);
    cin.get();
    return 0;
}