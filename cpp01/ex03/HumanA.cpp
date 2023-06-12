#include    "HumanA.hpp"

HumanA::HumanA(Weapon weapon, std::string name)
{
    this->name = name;
    this->weapon = weapon;
}

void    HumanA::attack()
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}