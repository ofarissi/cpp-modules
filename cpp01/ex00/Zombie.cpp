#include    "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie constructor is called!" << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destructor is called!" << std::endl;
}