#include    "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& source) : WrongAnimal(source)
{
    this->type = source.type;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& source)
{
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    std::cout << "WrongCat Copy assignement operator Called" << std::endl;
    return *this;
}

std::string    WrongCat::getType() const
{
    return this->type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}