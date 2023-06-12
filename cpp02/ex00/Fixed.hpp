#ifndef FIXED_HPP
# define    FIXED_HPP

#include    <iostream>

class Fixed
{
    private:
        int numValue;
        static const int numBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& source);
        Fixed& operator=(const Fixed& source);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(const int raw);
};

#endif