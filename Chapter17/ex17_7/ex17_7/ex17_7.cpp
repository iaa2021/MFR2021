#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

#include <cstdlib>
using std::srand;
using std::rand;
#include <ctime>
using std::time;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::copy;
int main()
{
    srand(time(0));
    vector<vector<int>> vect;
    vector<int>temp;
    ostream_iterator<int> output(cout, ", ");
    int array[10][20];
    for ( int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
            array[i][j] = rand() % 21 + 1;
    }
    cout << "Array contains:\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
            cout << array[i][j] << ", ";

        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            temp.push_back(array[i][j]);
        }
        vect.push_back(temp);
        temp.clear();
    }
    cout << "\nVector contains:\n";
    for (int i = 0; i < vect.size(); i++)
    {
        copy(vect.at(i).begin(), vect.at(i).end(), output);

        cout << endl;
    }
    return 0;
}


