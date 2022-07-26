#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strtok;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    string list;
    cout << "Include list of animals, you'd like to transfer:\n? ";
    getline(cin, list);
    vector<string> v;
    const int n = list.size() + 1;
    char *ptr = new char[n];
    strcpy(ptr, list.c_str()); 
    char *segment;
    segment = strtok( ptr, " ,." );
    ostream_iterator<string> it(cout, ", ");
    while ( segment != 0 )
    {
        v.push_back(segment);
        segment = strtok( NULL, " ,." );
    }
    cout << "vector contains such details:\n";
    copy(v.begin(), v.end(), it);
    return 0;
}