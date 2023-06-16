#include    "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout <<"WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source)
{
    this->type = source.type;
    std::cout <<"WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source)
{
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    std::cout <<"WrongAnimal Copy assignement operator Called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal Destructor Called" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}