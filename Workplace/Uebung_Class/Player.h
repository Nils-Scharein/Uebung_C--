
class Player
{
    private:
        int number = 10;

    public:
        std::string name;
        int age;
    
        void change();
        void change_number()
        {
            number = 20;
        }

    protected:
        int test;
};

void Player::change()
   {
            number = 40;
   }