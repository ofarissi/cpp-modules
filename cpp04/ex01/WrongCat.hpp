#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include    "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
            WrongCat();
            WrongCat(const WrongCat& source);
            ~WrongCat();
            WrongCat& operator=(const WrongCat& source);
            std::string getType() const;
            void    makeSound() const;
};


#endif