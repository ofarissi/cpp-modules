#include    "HumanB.hpp"

HumanB::HumanB(const std::string &name) {
    this->name = name;
    this->weapon = 0;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon) {
        std::cout << name << " attack with their " 
                  << weapon->getType() << std::endl;
    }
    else {
        std::cout << name << " is unarmed " << std::endl;
    }
}

HumanB::~HumanB() {}