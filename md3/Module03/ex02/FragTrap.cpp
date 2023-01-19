#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Constructor for FragTrap" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap()
{
    std::cout << "FragTrap Copy Constructor" << std::endl;
    *this = obj;
}
FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout << "FragTrap Operator overload" << std::endl;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    this->name = obj.name;
    return *this;
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Parameterized constructor " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    this->name = name;
}

void FragTrap::attack(const std::string& target)
{
    if(Energy_points <= 0 || Hit_points <= 0)
    {
        std::cout << this->name << "Dead !" <<std::endl;
    }
    else
    {

        Hit_points -= 1;
        Energy_points -= 1;
        std::cout << "ScavTrap " << this->name << "attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl; 
    }
}
FragTrap::~FragTrap()
{
    std::cout << "Distructor for FragTrap" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    if(Energy_points > 0 || Hit_points > 0)
    {
        std::cout << this->name << " FragTrap HIIIIGH FIVES" << std::endl;
        return;
    }
    std::cout << this->name << " CAN'T FragTrap HIIIIGH FIVES" << std
}