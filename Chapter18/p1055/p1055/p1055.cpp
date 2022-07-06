#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
using std::ostringstream;
#include <vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    string line("Input such 784 lines. Their weight is 17.45 tonnes, height 147 metres, time 24.32 hours.\n");
    istringstream inpLine(line);
    vector<double>dVect; vector<string>sVect; vector<int>iVect;
    ostream_iterator<string> dIt(cout, " ");
    string s; double d; int i;
    ostringstream outpLine(line);
    cout << outpLine.str() << endl;
    while (inpLine >> s)
    {
        sVect.push_back(s);
    }
    copy(sVect.begin(), sVect.end(), dIt);
    cin.get();
    return 0;
}

