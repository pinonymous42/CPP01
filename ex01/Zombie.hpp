#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        static Zombie* zombieHorde(int N, std::string name);
    private:
        std::string m_name;
};

#endif
