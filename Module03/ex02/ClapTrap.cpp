#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Parameterized constructor " << std::endl;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->name = name;
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy Constructor" << std::endl;
    *this = obj;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Distructor" << std::endl;
}
    
void ClapTrap::attack(const std::string& target)
{
    if(Energy_points <= 0 || Hit_points <= 0)
    {
        std::cout << this->name << "Dead !" <<std::endl;
    }
    else
    {

        Hit_points -= 1;
        Energy_points -= 1;
        std::cout << "ClapTrap " << this->name << "attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl; 
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{

    this->Hit_points -= amount;
    if(Hit_points > 0)
     {
        std::cout << "ClapTrap " << this->name << " Take " << amount <<"damage!"<< std::endl;
     }
     else
        std::cout<< this->name << "Already dead"<<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(Energy_points > 0 && Hit_points > 0)
    {
        Hit_points += amount;
        Energy_points -= 1;
    }
    else
    std::cout << "Energypoints 0 , Died"<<std::endl;

}