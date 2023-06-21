#ifndef Weapon_HPP
#define Weapon_HPP

#include    <iostream>

class Weapon {
    private:
            std::string type;
    public:
            Weapon();
            Weapon(std::string type);
            std::string const &getType();
            void        setType(std::string type);
            ~Weapon();
};

#endif