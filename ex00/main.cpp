#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << "Generate Zombie on stack memory" << std::endl;
    std::cout << "Enter the zombie's name: " << std::flush;
    while (1)
    {
        if (!std::getline(std::cin, name))
            std::exit(1);
        if (!name.empty())
            break ;
        std::cout << "Enter the zombie's name: " << std::flush;
    }
    Zombie  stack_zombie(name);
    stack_zombie.announce();

    std::cout << "Generate Zombie on heap memory" << std::endl;
    std::cout << "Enter the zombie's name: " << std::flush;
    while (1)
    {
        if (!std::getline(std::cin, name))
            std::exit(1);
        if (!name.empty())
            break ;
        std::cout << "Enter the zombie's name: " << std::flush;
    }
    Zombie  *heap_zombie = Zombie::newZombie(name);
    heap_zombie->announce();

    std::cout << "Generate Zombie on stack memory and call randomChump funciton" << std::endl;
    std::cout << "Enter the zombie's name: " << std::flush;
    while (1)
    {
        if (!std::getline(std::cin, name))
            std::exit(1);
        if (!name.empty())
            break ;
        std::cout << "Enter the zombie's name: " << std::flush;
    }
    Zombie::randomChump(name);

    delete heap_zombie;
    return (0);
}
