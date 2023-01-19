#include <iostream>

class Zombie{
    private:
    std::string name;
    public:
    Zombie();
    Zombie(std::string name);
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    std::string get_name();
    void annonce();
    void set_name();
    ~Zombie();
};
