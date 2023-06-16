#include    "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog& source) : Animal(source)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->type = source.type;
}

Dog& Dog::operator=(const Dog& source)
{
    std::cout << "Dog Copy assignement operator Called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    return *this;
}

std::string    Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}
