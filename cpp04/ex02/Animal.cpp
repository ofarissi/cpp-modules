#include    "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout <<"Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal& source)
{
    this->type = source.type;
    std::cout <<"Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& source)
{
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    std::cout <<"Animal Copy assignement operator Called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout <<"Animal Destructor Called" << std::endl;
}

void    Animal::makeSound() const
{
}

std::string    Animal::getType() const
{
    return this->type;
}