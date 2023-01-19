#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    zombie.randomChump("lmzkek");
    Zombie *zombi;
    zombi = zombie.newZombie("saber");
    zombi->annonce();
    delete zombi;
    return 0;
}