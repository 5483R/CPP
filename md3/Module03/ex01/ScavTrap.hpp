#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    void guardGate();
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ScavTrap &operator=(ScavTrap const &obj);
    void attack(const std::string& target);
    ~ScavTrap();
};
