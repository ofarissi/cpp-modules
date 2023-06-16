#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include    <iostream>
#include    <cstdio>
#include    <cstdlib>


class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};


#endif