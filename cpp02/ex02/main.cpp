#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    Fixed c(3.3f);
    Fixed d(4.4f);
    const Fixed& minFixed1 = Fixed::min(c, d);
    const Fixed& minFixed2 = Fixed::min(a, b);
    const Fixed& maxFixed1 = Fixed::max(c, d);
    const Fixed& maxFixed2 = Fixed::max(a, b);

    std::cout << minFixed1 << std::endl;
    std::cout << minFixed2 << std::endl;
    std::cout << maxFixed1 << std::endl;
    std::cout << maxFixed2 << std::endl;

    return 0;
}
