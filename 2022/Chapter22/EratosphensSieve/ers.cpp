#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
int main()
{
    int array[1000] = {0};  vector<int> v;
    for (size_t i = 3; i < 1000; i++)
    {
        for(size_t j = 2; j < 1000; j++)
        {
            if( i != j && i % j == 0 )
            array[i] = 1;
        }
    }
    cout << "Odd numbers from 1 to 1000 are:\n";
    for (size_t i = 0; i < 1000; i++)
    {
        if (array[i] == 0 )
            v.push_back(i);
    }
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << ", ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}