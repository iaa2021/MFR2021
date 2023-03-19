#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <cstring>
using std::strtok;
int main()
{
    string text; vector<string>pals, tokens;
    cout << "Input text:\n";
    getline( cin, text );
    size_t length = text.size();
    char *ptr = new char[ length ];
    for (size_t i = 0; i < length; i++)
    {
        ptr[ i ] = text.at( i );
    }
    char *token = strtok( ptr, ". ,-" );
    size_t tSize; int mark;
    while ( token != NULL )
    {
        tokens.push_back( token );
        token = strtok( NULL, ". ,-" );
    }
    for ( size_t i = 0; i < tokens.size(); i++ )
    {
        mark = 0;
        tSize = tokens.at( i ).size();
        for( size_t j = 0; j < tSize; j++ )
        {
            if( tokens.at( i ).at( j ) != tokens.at( i ).at( tSize - 1 - j ) )
            mark++;
        }
        if ( mark == 0 )
        pals.push_back( tokens.at( i ) );
    }
    if( pals.empty() )
    cout << "\nThere are no palindroms in this text.\n";
    else
    {
       cout << "\nThere are such palindroms in this text.\n"; 
       for (size_t i = 0; i < pals.size(); i++)
    {
        cout << pals.at( i ) << ", ";
    }
    }
    return 0;
}