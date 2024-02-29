#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once

class Account
{
public:
    bool set_name(std::string set_name);
    bool set_balance(double bal) {balance = bal; return true;}
    bool get_balance() {return balance;}
    bool deposit(double amount);
    bool withdraw(double amount);

private:
    //attribues
    std::string name;
    double balance;

};

#endif