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
            item.second = 5 + rand()%30;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(2000ms);
        cout << endl;
    }
}
int main()
{
    srand(time(0));
    string cities[] = { "New York", "Mumbai", "Berlin", "Oslo", "London", "Paris", "Bruselle", "Kyiv", "Odessa"};
    map <string, int> fMap1;
    for (int i = 0; i < sizeof( cities)/sizeof(string); i++)
    {
        fMap1[cities[i]] = i + 10;
    }
    map <string, int> fMap =
    {
        { "New York", 19 },
        { "Mumbai", 21 },
        { "Berlin", 20 }
    }; 
    thread bgWorker(refreshfMap, fMap1);
    cin.get();
}


