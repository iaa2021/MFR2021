#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "config.h"
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
    return 0;
}
