#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Account library version is: ";
    Account::getVersion();
    cout << "Saving account library version is: ";
    SavingAccount::getVersion();
    cout << "Checking account library version is: ";
    CheckingAccount::getVersion();
    return 0;
}
