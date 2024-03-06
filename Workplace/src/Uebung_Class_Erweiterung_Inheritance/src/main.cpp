// Include class
#include "Account.h"
#include "Saving_Account.h"

// Include Lib
#include <iostream>

int main()
{
    Account Frank;
    Frank.set_balance(3000);
    Frank.deposit(200);
    Frank.withdraw(100);
    Frank.withdraw(2000);

    Account Peter("Peter", 500);
    Peter.withdraw(400);
    Peter.deposit(500);
    Peter.withdraw(700);
}