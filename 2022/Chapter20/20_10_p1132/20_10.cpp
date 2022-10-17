#include <iostream>
#include <string>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    stack <char> st;
    string sentence = "lolt";
    string sentence1;
    for(size_t i = 0; i < sentence.size(); i++)
    {
        st.push( sentence.at(i) );
    }
    while ( !st.empty() )
    {
        sentence1 += st.top();
        st.pop();
    }
    
    cout << "Original string is:\n";
    cout << sentence << endl;
    cout << "Reversed string is:\n";
    cout << sentence1 << endl;
    const char * sentence0 = sentence.c_str();
    const char * sentence2 = sentence1.c_str();
    if ( strcmp( sentence0, sentence2 ) == 0 )
        cout << "They are equal.\n";
    else
    cout << "They are not equal.\n";
    
    return 0;
}