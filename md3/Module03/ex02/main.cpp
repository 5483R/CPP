
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main ()
{
    // ClapTrap one;
    ClapTrap a;
    FragTrap f;
    ScavTrap s("hmd");
    ScavTrap s2(s);

    s2.attack("bo9lwa");





    // FragTrap other("lol");


    // other.takeDamage(4);
    // other.beRepaired(0);
    // other.takeDamage(100);
    // other.takeDamage(0);
    // other.attack("one");
}
