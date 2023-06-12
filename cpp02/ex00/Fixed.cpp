#include    "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->numValue = 0;
}

Fixed::Fixed(const Fixed& source)
{
    std::cout << "Copy constructor called"  << std::endl;
    this->numValue = source.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->numValue = source.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return numValue;
}

void Fixed::setRawBits(const int raw) {
    numValue = raw;
}