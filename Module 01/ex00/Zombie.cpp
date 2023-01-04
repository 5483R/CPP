#include "Zombie.hpp"
Zombie::Zombie()
{
    std::cout << "9lawi" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "const" << std::endl;
    this->name = name;
}

void Zombie::annonce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
    std::cout << "getter" <<std::endl;
    return this->name;
}
Zombie::~Zombie()
{
    std::cout << "distr" << std::endl;
}