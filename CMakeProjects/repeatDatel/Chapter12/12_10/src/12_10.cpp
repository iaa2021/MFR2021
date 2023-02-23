#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "config.h"
#include <string>
using std::string;
int main()
{
    cout << fixed << setprecision( 2 );
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Account::getVersion();
    SavingAccount::getVersion();
    CheckingAccount::getVersion();
    Account a( 2250 );
    cout << "Base acc balance is " << a.getBalance() << "$.\n";
    double sum;
    cout << "Input sum for widraval money: ";
    cin >> sum;
    a.creditAcc( sum );
    SavingAccount sa( 1000, 0.05 );
    cout << sa.calculatelnterest();
    CheckingAccount chA( 3000, 0.02 );
    cout << "Input sum for put money to acc: ";
    cin >> sum;
    chA.debit( sum );
    cout << "\nExample of dynamic binding:\n";
    Account *array[ 3 ] = { &a, &sa, &chA };
    string names[ 3 ] = { "Account", "SavingsAccount", "CheckingAccount" };
    for (int i = 0; i < 3; i++)
    {
        cout << names[ i ] << "'s balance is " << array[ i ] -> getBalance();
        cout << "$." << endl;
    }
    return 0;
}
