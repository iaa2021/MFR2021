#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
string cipher(string &);
string decryption(string &);
int main()
{
    string alphabet( "abcdefghijklmnopqrstuvwxyz " );
    cout << alphabet.size() << endl;
    string text, text1;
    cout << "Input sentence, you'd like to cipher:\n? ";
    getline(cin, text);
    cout << "Sentence is:\n" << text << endl;
    cout << "Your sentence was cyphered and looks like:\n";
    cout << cipher(text) << endl;
    cout << "Input sentence, you'd like to decipher:\n? ";
    getline(cin, text1);
    cout << "Sentence is:\n" << text1 << endl;
    cout << "Your sentence was cyphered and looks like:\n";
    cout << decryption(text1) << endl;
    cout << "alphabet.at(alphabet.size() - 1) = ." << alphabet.at(alphabet.size() - 1) << "." << endl;
    return 0;
}
string cipher(string &text)
{
    string alphabet( "abcdefghijklmnopqrstuvwxyz " );
    string text1;
    for (size_t i = 0; i < text.size(); i++)
    {
        for (size_t j = 0; j < alphabet.size(); j++)
        {
            if ( text.at(i) == alphabet.at(j) )
                {
                    if( j > ( (alphabet.size() - 1)/2 ) - 1 )
                        text1 += alphabet.at( j - 13 );
                    else
                        text1 += alphabet.at( j + 13 );
                }
            else
                text.append(" ");
        }
    }
    return text1;
}
string decryption(string &text)
{
    string alphabet( "abcdefghijklmnopqrstuvwxyz " );
    string text1;
    for (size_t i = 0; i < text.size(); i++)
    {
        for (size_t j = 0; j < alphabet.size(); j++)
        {
            if (text.at(i) == alphabet.at(alphabet.size() - 1))
                text1 += alphabet.at(alphabet.size() - 1);
            else
                {
                    if ( text.at(i) == alphabet.at(j) )
                    {
                        if( j > ( (alphabet.size() - 1)/2 ) - 1 )
                            text1 += alphabet.at( j - 13 );
                        else
                            text1 += alphabet.at( j + 13 );
                    }
                }
        }
    }
    return text1;
}