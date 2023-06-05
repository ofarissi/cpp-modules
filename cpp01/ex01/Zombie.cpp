#include    "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "An objt with name :" << name << 
                        "is ctreated." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "an objct with name :" << name <<
                    "is destroyed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}