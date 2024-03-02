#include <string>

//define so online once build
#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once

class Account
{

private:
    //attribues
    static int num_Accounts;
    std::string name;
    double balance;

public:
    //declared inside
    bool set_balance(double bal) {balance = bal; return true;}
    bool get_balance() {return balance;}

    //declared outside in cpp
    bool set_name(std::string set_name);
    bool deposit(double amount);
    bool withdraw(double amount);
    static int get_num_Accounts();

    //Construktor und Dekonstruktor
    Account()
    : name{"None"}, balance{0}
    {
        num_Accounts++;
        //name = "None";
        //balance = 0.0;

    }

    ~Account()
    {
    num_Accounts--;

    }
};

#endif