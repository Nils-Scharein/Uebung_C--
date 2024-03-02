#include <iostream>
#include <vector>
#include <string>
#include "..\Uebung_Class\Account\Account.cpp"
#include "..\Uebung_Class\Player Class\Player.cpp"

int main()
{
Player frank; 
frank.name = "Nils";
frank.age = 25;

Player Nils;
Nils.name = "Test";

Player *enemy = new Player;
(*enemy).name = "Enemy";
(*enemy).change_number();
(*enemy).change();
(*enemy).set_balance(55.33);

Account *test = new Account;
test -> set_name("Frank");
test -> deposit(600.542);
std::cout << test -> get_balance() << std::endl;
test -> withdraw(200.20);
std::cout << test -> get_balance() << std::endl;
test -> withdraw(800);

Account maier;
Account felix;

std::cout << Account::get_num_Accounts() << std::endl;

delete test;

return 0;

}