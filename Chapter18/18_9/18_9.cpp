#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
void outputString( string & );
int main()
{
    string s1("murnay"); string s2("inserter"); string s3("morning"); string s4("baker");
    vector<string>v;
    v.push_back(s1); v.push_back(s2); v.push_back(s3); v.push_back(s4);
    for (long unsigned int i = 0; i < v.size(); i++)
    {
        outputString( v.at(i) );
    }
    return 0;
}
void outputString( string &text )
{
    int tSize = text.size(); int a = 0;
    for (long unsigned int i = 0; i < text.size(); i++)
    {
        if( text.at( tSize - 1 ) == 'r' || ( text.at( tSize - 2 ) == 'a' && text.at( tSize - 1 ) == 'y' ) )
        a = 1;
    }
    if (a == 1)
    {
        cout << text << endl;
    }
    
}