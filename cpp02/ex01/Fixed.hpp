#ifndef FIXED_HPP
# define    FIXED_HPP

#include    <cmath>
#include    <iostream>

class Fixed
{
    private:
        int numValue;
        static const int numBits = 8;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        int toInt() const;
        float toFloat() const;
        Fixed(const Fixed& source);
        Fixed& operator=(const Fixed& source);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
