#include "HumanA.hpp"

HumanA::HumanA()
{
    
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanA::attack()
{
    std::cout << this->name << "attacks with their"<< this->weapon->getType()<<std::endl;
}
