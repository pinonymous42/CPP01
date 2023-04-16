#include "Weapon.hpp"

Weapon::Weapon(std::string weapon):m_type(weapon)
{

}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType(void)
{
    return (m_type);
}

void        Weapon::setType(std::string type)
{
    m_type = type;
}