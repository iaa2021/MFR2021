#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int array[ 10 ] = { 0 }; int saloonType, number, places0 = 5, places1 = 5;
    cout << "Make your order, first input 0 if you'd like to buy ticket\n in the ";
    cout << "saloon for non-smokers, 1 - for smokers, \n";
    cout << "2 - to end input.\n";
    cin >> saloonType;
    while( saloonType != 2 )
    {
        cout << "Input number of tickets: ";
        cin >> number;
        if( saloonType == 0 )
        {
                for (int i = 0; i < 5; i++)
                {
                    if( array[ i ] == 0 )
                    {
                        array[ i ] = 1;
                        cout << "Place #" << i + 1 << " in non-smokers saloon." << endl;
                        number--; places0--;
                        if( number == 0 )
                        break;
                    }
                } 
            cout << '\n' << places0 << " places left in the non-smokers saloon.\n";
        }
        if( saloonType == 1 )
        {
            for (int i = 5; i < 10; i++)
            {
                    if( array[ i ] == 0 )
                    {
                        array[ i ] = 1;
                        cout << "Place #" << i + 1 << " in smokers saloon." << endl;
                        number--; places1--;
                        if( number == 0 )
                        break;
                    }
            }
            cout << '\n' << places1 << " places left in the smokers saloon.\n";
        }
        cout << "At this moment:\n" << places0 << " places left in the non-smokers saloon.\n";
        cout << places1 << " places left in the smokers saloon.\n";
        cout << "Make your order, first input 0 if you'd like to buy ticket\n in the ";
        cout << "saloon for non-smokers, 1 - for smokers, then number of tickets.\n";
        cout << "2 - to end input.\n";
        cin >> saloonType;
    }
    return 0;
}