#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    try
    {
        Zombie *new_zombie = new Zombie(name);
        return (new_zombie);
    }
    catch(std::bad_alloc)
    {
        std::exit(1);
    }
}
