#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

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


return 0;
}