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
    float value = static_cast<float>(getRawBits() * scalingFactor);
    
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

// Overloading arithmetic operators

Fixed	Fixed::operator+(const Fixed& source) const
{
	return Fixed(this->toFloat() + source.toFloat());
}

Fixed	Fixed::operator-(const Fixed& source) const
{
	return Fixed(this->toFloat() - source.toFloat());
}

Fixed	Fixed::operator*(const Fixed& source) const
{
	return Fixed(this->toFloat() * source.toFloat());
}

Fixed	Fixed::operator/(const Fixed& source) const
{
	if (source.toFloat() == 0)
	{
		std::cerr << "You cannot divid by 0." << std::endl;
		exit(1);
	}
	return Fixed(this->toFloat() / source.toFloat());
}

// overloading the comparison operators

bool	Fixed::operator<(const Fixed& source) const
{
	return this->numValue < source.numValue;
}

bool	Fixed::operator>(const Fixed& source) const
{
	return this->numValue > source.numValue;
}

bool	Fixed::operator<=(const Fixed& source) const
{
	return this->numValue <= source.numValue;
}

bool	Fixed::operator>=(const Fixed& source) const
{
	return this->numValue >= source.numValue;
}

bool	Fixed::operator==(const Fixed& source) const
{
	return this->numValue == source.numValue;
}

bool	Fixed::operator!=(const Fixed& source) const
{
	return this->numValue != source.numValue;
}

//post(increment/decrement):

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(*this);
	return tmp;
}

//pre(increment/decrement)

Fixed&	Fixed::operator++()
{
	this->numValue++;
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->numValue--;
	return *this;
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
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