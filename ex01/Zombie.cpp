#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << m_name << " is destroyed!" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
