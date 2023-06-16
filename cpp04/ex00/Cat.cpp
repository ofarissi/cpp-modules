#include    "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& source) : Animal(source)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->type = source.type;
}

Cat& Cat::operator=(const Cat& source)
{
    std::cout << "Cat Copy assignement operator Called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    return *this;
}

std::string    Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meaw Meaw" << std::endl;
}
