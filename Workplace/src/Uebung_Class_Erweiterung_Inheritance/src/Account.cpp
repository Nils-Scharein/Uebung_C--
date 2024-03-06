#include "Account.h"
#include <iostream>

int Account::num_Accounts = 0;

// Constructors
Account::Account()
    : name{"None"}, balance{0}
{
    num_Accounts++;
}

Account::Account(std::string account_name, double bal)
    : name{account_name}, balance{bal}
{
    num_Accounts++;
}

Account::Account(const Account &source)
{
}

Account::~Account()
{
    num_Accounts--;
}

// Cheks if Ammount is greater then 0 and deposit it if true
bool Account::deposit(const double amount)
{
    if (amount > 0)
    {
        double temp = balance;
        balance += amount;
        std::cout << "Deposit complete. New Balance: " << temp << " -> " << balance << std::endl;
        return true;
    }
    else
    {
        std::cout << "Cant deposit negative Numbers. Use Withdraw func" << std::endl;
        return false;
    }
}

// Checks if the withdraw woud still be greater then 0 and withdraws it if true
bool Account::withdraw(const double amount)
{
    if (balance - amount > 0)
    {
        double temp = balance;
        balance -= amount;
        std::cout << "Withdraw complete. New Balance: " << temp << " -> " << balance << std::endl;
        return true;
    }
    else
    {
        std::cout << "Not Enough Balance: " << balance << " Ammount:" << amount << std::endl;
        return false;
    }
}
