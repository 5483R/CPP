#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon):name(name),weapon(weapon)
{
    std::cout <<"constractur "<< std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroy called" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their"<< this->weapon.getType()<<std::endl;
}
