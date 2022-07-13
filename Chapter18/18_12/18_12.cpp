#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    int attempts = 0; int i = 0;
    string gibbet[7] = { " 0 ", "\n/", "|", "\"", "\n | ", "\n/", "\"" };
    string position;
    string word( "good" );
    string word1; char letter;
    cout << "Try to guess the word, first letter:\n? ";
    cin >> letter;
    while ( attempts < 7 || word1 != word )
    {
        if ( word.at(i) == letter )
        {
            word1 += letter;
            if (i == word.size() - 1 )
            {
                cout << "You won.\n";
                break;
            }
            else
            {
                cout << "The letter is right, next:\? ";
                i++;
            }
        }
        else
        {
            position += gibbet[attempts];
            cout << position << endl;
            attempts++; 
            cout << "Wrong letter.\n? ";
        }
        if ( attempts < 7 )
        cin >> letter;
        else if( attempts == 7 )
        break;
    }
    if( word1 == word )
    cout << "You've guessed right word: " << word1 << endl;
    else 
    cout << "You've not solved task.\n" << position << endl;
    return 0;
}