#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include "config.h"
int main()
{
    srand( time( 0 ) );
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    string article[ 5 ] = { "the", "a", "one", "some", "any" };
    string noun[ 5 ] = { "boy", "girl", "dog" , "town", "саг" };
    string verb[ 5 ] = { "drove", "jumped", "ran", "walked", "skipped" };
    string preposition[ 4 ] = { "to", "from", "over", "on" };
    string adjective[ 9 ] = { "white", "black", "red", "green", "yellow", "thin", "fat", "quick", "slow" };
    int a;
    string story;
    for (size_t i = 0; i < 5; i++)
    {
        a = 5;
        story.append( article[ rand()%a ] ); story += " ";
        story.append( noun[ rand()%a ] ); story += " ";
        story.append( verb[ rand()%a ] ); story += " ";
        a = 4; 
        story.append( preposition[ rand()%a ] ); story += " ";
        a = 9;
        story.append( adjective[ rand()%a ] ); story += " ";
        a = 5;
        story.append( noun[ rand()%a ] ); story += ".\n";
    }
    cout << story << endl;
    return 0;
}
