#include "Zombie.hpp"
#include <string>

int main(void)
{
    std::string num;
    std::string name;
    std::string::size_type index;

    std::cout << "Enter the number of zombies: " << std::flush;
    while (1)
    {
        if (!std::getline(std::cin, num))
            std::exit(1);
        for(index = 0; index < num.length(); index++)
        {
            if (!isdigit(num[index]))
            {
                std::cout << "Invalid input" << std::endl;
                break ;
            }
        }
        if (index == num.length())
            break ;
        std::cout << "Enter the number of zombies: " << std::flush;
    }
    std::cout << "Enter the name of zombies: " << std::flush;
    while (1)
    {
        if (!std::getline(std::cin, name))
            std::exit(1);
        if (!name.empty())
            break ;
        std::cout << "Enter the name of zombies: " << std::flush; 
    }
    if (atoi(num.c_str()) < 0)
        return (1);
    Zombie *zombies = Zombie::zombieHorde(atoi(num.c_str()), name);
    for(int i = 0; i < atoi(num.c_str()); i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}
