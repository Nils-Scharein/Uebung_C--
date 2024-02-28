#include <iostream>
#include <vector>
#include <string>

class Player
{
    private:
        int number = 10;

    public:
        std::string name;
        int age;

};

int main()
{
Player frank; 
frank.name = "Nils";
frank.age = 25;

Player Nils;
Nils.name = "Test";
Nils.number = 20;

return 0;
}