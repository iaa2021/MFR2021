#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <string>
using std::string;

#include <cstring>
using std::strcpy;
using std::strtok;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <vector>
using std::vector;
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
    cout << "\nNow completing exersise 8.34.\n";
    vector< string > story3;//storing a tokens
    string story4;//resulting string
    char str [ story.length() ];
    int s = story.length();
    strcpy( str, story.data() );
    char *ptr = strtok( str, " ,.'\n'" );
    while ( ptr != NULL )
    {
        story3.push_back( ptr );
        ptr = strtok( NULL, " ,.'\n'" );
    }
    for (size_t i = 0; i < story3.size(); i++)
    {
        char s = story3.at( i ).at( 0 );
        story3.at( i ) += s;
        story3.at( i ).append( "ay" );
        story3.at( i ).erase( 0, 1 );
        story4.append( " ");
        story4.append( story3.at( i ) );
        if( ( i + 1 ) % 6 == 0 )
        story4.append( ".\n" );
    }
    cout << endl << story4 << endl;
    return 0;
}
