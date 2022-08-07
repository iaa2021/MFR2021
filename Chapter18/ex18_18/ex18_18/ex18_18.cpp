#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <string>
using std::string;
#include<cctype>
using std::tolower;
using std::isupper;
#include <iomanip>
using std::setprecision;
using std::setw;
int main()
{
    string text, vowel("aeiouy"), delimit(" ,.-");
    int lq;//letter qwantity
    int dq = 0;//delimitators qwantity
    char c;
    cout << "Input text:\n";
    getline(cin, text);
    for (size_t i = 0; i < text.size(); i++)
    {
        for (size_t j = 0; j < delimit.size(); j++)
        {
            if (text.at(i) == delimit.at(j))
                dq++;
        }
    }
    lq = text.size() - dq;
    int* ptr = new int[vowel.size()];//vowel's frequencies
    for (size_t i = 0; i < vowel.size(); i++)
    {
        ptr[i] = 0;
    }
    for (size_t i = 0; i < text.size(); i++)
    {
        c = text.at(i);
        if ( isupper(c) )
        {
            c = tolower(c);
        }
        for (size_t j = 0; j < vowel.size(); j++)
        {
            if (c == vowel.at(j))
                ptr[j]++;
        }
    }
    cout << "Common qwantity of letters is - " << lq << endl;
    cout << "Common qwantity of vowels:\n ";
    for (size_t i = 0; i < vowel.size(); i++)
    {
        cout << setw(5) << vowel.at(i) << " - " << setw(5) << ptr[i] << endl;
    }
    double* fPtr = new double[vowel.size()];//frequency's array
    for (size_t i = 0; i < vowel.size(); i++)
    {
        fPtr[i] = static_cast<double>(ptr[i]) / lq;
    }
    cout << "\nLetters frequency:\n";
    for (size_t i = 0; i < vowel.size(); i++)
    {
        cout << setw(3) << vowel.at(i) << "   " << fixed << setw(7) << setprecision(2) << fPtr[i] * 100 << "%" << endl;
    }
    delete[] ptr;
    delete[] fPtr;
    cin.get();
    return 0;
}

