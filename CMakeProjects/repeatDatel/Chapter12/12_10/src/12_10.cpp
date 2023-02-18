#include "Account.h"
#include "SavingAccount.h"

#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Account::getVersion();
    SavingAccount::getVersion();
    Account a( 1250 );
    cout << "Base acc balance is " << a.getBalance() << "$.\n";
    double sum;
    cout << "Input sum for widraval money: ";
    cin >> sum;
    a.creditAcc( sum );
    return 0;
}
