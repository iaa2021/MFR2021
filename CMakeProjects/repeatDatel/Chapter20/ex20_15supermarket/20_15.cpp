#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <queue>
using std::queue;
struct Buyer
{
    public:
    Buyer( int t )
        : appearTime( t ), appear( rand()%4 + 1 ), service( rand()%3 + 1 )
    {}
    void print() const
    {
        cout << "Appear time is: " << appear;
        cout << "\nService time is: " << service << endl;
    }
    int appearTime;//absolute time of buyer's appear
    int appear;// interval of buyer's appear
    int service;// time for sevice
};
int main()
{
    srand( time( 0 ) ); int timeCount = 0;// whole buyer's appearing time 
    int buyerCount = 0; int delay = 0;// value of maximum buyer's anticipation
    int Anticipation = 0;// common service time
    queue<Buyer> supermarket;
    while ( timeCount <= 720 )//buyer's appearing
    {
        Buyer *ptr = new Buyer( timeCount );
        supermarket.push( *ptr );
        timeCount += ptr -> appear;
        buyerCount++;
    }
    Anticipation = supermarket.front().appear + supermarket.front().service;// first buyer 
    delay = supermarket.front().service;
    while ( Anticipation <= 720 )
    { 
        supermarket.pop();
        // buyer1's gone  earlier than buyer2's come
        if( Anticipation < supermarket.front().appearTime )
        Anticipation = ( supermarket.front().appearTime + supermarket.front().service );
        else // buyer1's gone later than buyer2's come
        Anticipation +=  supermarket.front().service; 
        if( delay < ( Anticipation - supermarket.front().appearTime ) )
        delay = Anticipation - supermarket.front().appearTime;
    }
    cout << "There were " << buyerCount << " buyers during 720 min in supermarket.\n";
    cout << buyerCount - supermarket.size() << " buyers have been serviced during day.\n";
    cout << "Maximum anticipation time for one buyer is: " << delay << " minutes.\n";
    return 0;
}