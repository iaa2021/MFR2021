#include "ATM.h"
#include "Transaction.h"
#include "BalanceInquiry.h"
#include "Withdrawal.h"
#include "Deposit.h"
enum MenuOption{ BALANCE_INQUIRY = 1, WITHDRAWAL, DEPOSIT, EXIT };

ATM::ATM()
    : userAuthenticated( false ), currentAccountNumber( 0 ){}

void ATM::run()
{
    while ( true )
    {
        while ( !userAuthenticated )
        {
            screen.displayMessageLine( "\nWelcome!" );
            authenticateUser();
        }
        performTransactions();
        userAuthenticated = false;
        currentAccountNumber = 0;
        screen.displayMessageLine( "\nThank you! Good bye!" );
    }
}
void ATM::authenticateUser()
{
    screen.displayMessageLine( "\nPlease, input your account number:\n" );
    int accountNumber = keypad.getInput();
    screen.displayMessageLine( "\nEnter your PIN: " );
    int pin = keypad.getInput();
    userAuthenticated = bankDatabase.authenticateUser( accountNumber, pin );
    if( userAuthenticated )
    {
        currentAccountNumber = accountNumber;
    }
    else
    screen.displayMessageLine( "Invalid account number or PIN. Please try again." );
}