#include "Account.h"
#include <string>
#include <iostream>

bool Account::set_name(std::string set_name)
{
    name = set_name;
    return true;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount > 0)
    {
        std::cout << "Withdraw Succesful" << std::endl;
        balance -= amount;
        return true;
    }
    else
    {
        std::cout << "Withdraw not Succesful" << std::endl;
        return false;
    }
}