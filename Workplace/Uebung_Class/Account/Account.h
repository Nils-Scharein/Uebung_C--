#include <string>

//define so online once build
#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once

class Account
{
public:
    //declared inside
    bool set_balance(double bal) {balance = bal; return true;}
    bool get_balance() {return balance;}

    //declared outside in cpp
    bool set_name(std::string set_name);
    bool deposit(double amount);
    bool withdraw(double amount);

    //Construktor und Dekonstruktor
    Account()
    : name{"None"}, balance{0}
    {
        //name = "None";
        //balance = 0.0;

    }

    ~Account()
    {


    }

private:
    //attribues
    std::string name;
    double balance;


};

#endif