#ifndef _Account_H_
#define _Account_H_

#include <string>

class Account
{
private:
    std::string name;
    static int num_Accounts;
    double balance;

public:
    // declared inside
    bool set_balance(double bal)
    {
        balance = bal;
        return true;
    }
    bool get_balance() { return balance; }
    const bool set_name(std::string set_name)
    {
        name = set_name;
        return true;
    }
    static int get_num_Accounts() { return num_Accounts; }

    // declared outside in cpp
    bool deposit(const double amount);
    bool withdraw(const double amount);

    // Constructor
    Account();
    Account(std::string account_name, double bal);

    // copy-constructor
    Account(const Account &source);
    // deconstructor
    ~Account();
};

#endif