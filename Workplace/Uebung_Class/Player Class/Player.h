#include <string>
#pragma once

class Player
{
    private:
        int number = 10;
        double balance = 0;

    public:
        std::string name;
        int age;
    
        void change();
        void set_balance(double bal);
        void change_number()
        {
            number = 20;
        };

    protected:
        int test = 0;
};
