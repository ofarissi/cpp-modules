#include    "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weapon(w)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}