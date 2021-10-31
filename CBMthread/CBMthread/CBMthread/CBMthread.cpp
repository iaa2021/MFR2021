#include <iostream>
#include <string>
#include <map>
#include <thread>
#include <chrono>
using namespace std;
void refreshfMap(map <string, int> fMap)
{
    while (true)
    {
        for (auto &item : fMap)
        {
            item.second++;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(2000ms);
    }
}
int main()
{
    map <string, int> fMap =
    {
        { "New York", 19 },
        { "Mumbai", 21 },
        { "Berlin", 20 }
    };
    thread bgWorker(refreshfMap, fMap);
    cin.get();
}


