#include <iostream>
#include <string>
#include <map>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>
using namespace std;
void refreshfMap(map <string, int> fMap)
{
    while (true)
    {
        for (auto &item : fMap)
        {
            item.second = 1 + rand()%30;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(2000ms);
        cout << endl;
    }
}
int main()
{
    srand(time(0));
    string cities[] = { "New York", "Mumbai", "Berlin", "Oslo", "London", "Paris", "Bruselle" };
    map <string, int> fMap =
    {
        { "New York", 19 },
        { "Mumbai", 21 },
        { "Berlin", 20 }
    }; 
    thread bgWorker(refreshfMap, fMap);
    cin.get();
}


