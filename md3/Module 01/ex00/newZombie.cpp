#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name){
    Zombie *newz = new Zombie(name); 
    return newz;
}
