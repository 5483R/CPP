#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
    public:
    void highFivesGuys(void);
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(FragTrap const &obj);
    void attack(const std::string& target);
    ~FragTrap();
};
#endif