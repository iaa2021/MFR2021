#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <map>
using std::map;
#include <sstream>
using std::ostringstream;
#include <cctype>
using std::tolower;
int main()
{
    map< int, string > intNames = {
    { 1, " One"}, { 2, " Two"}, { 3, " Three"}, { 4, " Four"}, { 5, " Five"}, { 6, " Six"},
    { 7, " Seven"}, { 8, " Eight" }, { 9, " Nine"}, { 10 , " Ten" }, { 11, "Eleven"},
    { 12, "Twelve"}, { 13, "Thirteen"}, { 14, "Forteen" }, { 16, "Sixteen"}, 
    { 17, "Seventeen" }, { 18, "Eighteen" }, { 19, "Nineteen" }, { 20, "Twenty" },
    { 30, "Thirty"}, { 40, "Fourty"}, { 50, "Fifty"}, { 60, "Sixty"},
    { 70, "Seventy"}, { 80, "Eighty" }, { 90, "Ninety"}
    };
    double number;
    cout << "Input salary sum:\n";
    cin >> number;
    int iNmb = static_cast<int>( number );
    cout << "\nDouble number is " << number;
    cout << " it's int countepart is " << iNmb << endl;
    string name; ostringstream s;
    map< int, string >::iterator it;
    int temp = iNmb / 1000; int c = 0;
    string sTemp;//for storing int names in lower case
    if( temp >= 1 )
    {
        it = intNames.find( temp );
        name.append( it -> second );
        c = 1;//add next integer names in lower case
        if( temp == 1 )
        name.append( " thousand " );
        else
        name.append( " thousands " );
    }
    temp = iNmb % 1000;
    int temp1 = temp / 100;
    if( temp1 >= 1 )
    {
        it = intNames.find( temp1 );
        if( c == 1 )
        {
            for (size_t i = 0; i < ( it -> second ).size(); i++)
            {
                sTemp += ( tolower( ( it -> second ).at( i ) ) );
            }
            name.append( sTemp );
            sTemp.clear();
        }
        else
        name.append( it -> second );

        if( temp1 == 1 )
        name.append( " hundreed " );
        else
        name.append( " hundreeds " ); 

        c = 1;
    }
    temp %= 100;
    temp1 = temp / 10;
    {
        it = intNames.find( temp1 * 10 );
        if( c == 1 )
        {
            for (size_t i = 0; i < ( it -> second ).size(); i++)
            {
                sTemp += ( tolower( ( it -> second ).at( i ) ) );
            }
            name.append( sTemp );
            sTemp.clear();
        }
        else
        name.append( it -> second );
        c = 1;
    }
    temp %= 10;
    if( temp1 >= 1 )
    {
        it = intNames.find( temp );
        if( c == 1 )
        {
            for (size_t i = 0; i < ( it -> second ).size(); i++)
            {
                sTemp += ( tolower( ( it -> second ).at( i ) ) );
            }
            name.append( sTemp );
            sTemp.clear();
        }
        else
        name.append( it -> second );
    }
    cout << "\nInteger " << number << " in words is " << name;
    cout << " dollars & " << ( ( number - static_cast<double>(iNmb) ) * 100 );
    cout << " cents.\n";
    return 0;
}