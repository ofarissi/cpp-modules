#include    "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie with name : " << name << 
                        " is created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie with name : " << name <<
                    " is destroyed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}