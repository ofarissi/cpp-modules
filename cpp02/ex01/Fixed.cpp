#include    "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->numValue = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    numValue = (num << numBits);
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    float scalingFactor = 1 << numBits;
    numValue = roundf(num * scalingFactor);
}


int Fixed::toInt() const {
    float scalingFactor = (1.0f / (1 << numBits));
    int value = getRawBits() * scalingFactor;

    return value;
}


float Fixed::toFloat() const {
    float scalingFactor = (1.0f / (1 << numBits));
    float value = getRawBits() * scalingFactor;

    return value;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    float value = fixed.toFloat();
    os << value;
    return os;
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

    return this->numValue;
}

void Fixed::setRawBits(const int raw) {
    numValue = raw;
}