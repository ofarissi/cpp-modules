#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include    <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

// WrongAnimal Constructor Called
// type: WrongAnimal
// WrongAnimal sound
// WrongAnimal Destructor Called
//         *************
// WrongAnimal Constructor Called
// WrongCat Constructor Called
// type: WrongCat
// Woof Woof
// WrongCat Destructor Called
// WrongAnimal Destructor Called


#endif