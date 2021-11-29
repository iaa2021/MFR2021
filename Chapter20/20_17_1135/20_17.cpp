#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string sentence = "When the fair gold morning of April stirred Mary Hawley awake, she turned over to her husband and saw him, little fingers pulling a frog mouth at her.";
    char *sent1 = new char[ sentence.size() + 1 ];
    strcpy( sent1, sentence.c_str());
    cout << sent1;
    char *token = strtok( sent1, " ,.-" );
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok( NULL, " ,.-" );
    }
    
    return 0;
}