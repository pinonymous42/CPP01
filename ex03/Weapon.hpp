#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string weapon);
        ~Weapon();
        const std::string &getType(void);
        void        setType(std::string type);
    private:
        std::string m_type;
};

#endif