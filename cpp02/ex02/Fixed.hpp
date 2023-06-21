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



        // overloading 6 comparison operator:

        bool   operator<(const Fixed& source) const;
        bool   operator>(const Fixed& source) const;
        bool   operator==(const Fixed& source) const;
        bool   operator!=(const Fixed& source) const;
        bool   operator>=(const Fixed& source) const;
        bool   operator<=(const Fixed& source) const;

        // overloading the 4 arithmetic operators

        Fixed   operator+(const Fixed& source) const;
        Fixed   operator*(const Fixed& source) const;
        Fixed   operator/(const Fixed& source) const;
        Fixed   operator-(const Fixed& source) const;

        // overloading the 4 increment/decrement operators

        Fixed&   operator++();
        Fixed   operator++(int);
        Fixed&   operator--();
        Fixed   operator--(int); 

        // max & min functions

        static Fixed& min(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        // static const Fixed& max(const Fixed& num1, const Fixed& num2);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif