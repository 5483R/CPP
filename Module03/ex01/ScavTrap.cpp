#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameterized constructor " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;

    *this = obj;
}

void ScavTrap::attack(const std::string& target)
{
    if(Energy_points <= 0 || Hit_points <= 0)
    {
        std::cout << this->name << " Dead !" <<std::endl;
    }
    else
    {

        Hit_points -= 1;
        Energy_points -= 1;
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl; 
    }
}
ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "ScavTrap Operator overload" << std::endl;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Distructor" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap est entre en mode Gate Keeper" << std::endl;
}