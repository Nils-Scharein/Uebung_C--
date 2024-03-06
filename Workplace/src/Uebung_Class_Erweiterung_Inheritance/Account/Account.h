#include <string>

#ifndef _Account_H_
#define _Account_H_

class Account
{
    private:
    std::string name;
        static int number_acc;
        double balance;



    public: 
        //declared inside
        bool set_balance(double bal) {balance = bal; return true;}
        bool get_balance() {return balance;} const

        //declared outside in cpp
        bool set_name(std::string set_name);
        bool deposit(const double amount);
        bool withdraw(const double amount);
        static int get_num_Accounts() const;

        //Constructor 
        Account();
        //copy-constructor
        Account(const Account &source);
        //deconstructor
        ~Account();
}


#endif