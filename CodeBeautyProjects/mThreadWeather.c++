#include <iostream>
#include <thread>
#include <string>
#include <map>
#include <chrono>
using namespace std;
void refreshFocast( map<string, int> fMap )
{
    while( true )
    for( auto item:fMap )
    {
        item.second++;
        cout << item.first << " - " << item.second << endl;
        this_thread::sleep_for(2000ms);
    }
}
int main()
{
    cout << "Hello world.\n";
    cin.get();
    return 0;
}
