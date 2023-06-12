#ifndef HUMANA_HPP
#define HUMANA_HPP

#include    "Weapon.hpp"

class HumanA {
    private:
            Weapon  weapon;
            std::string name;
    public:
            HumanA(Weapon weapon, std::string name);
            void    setType();
            void    attack();
            ~HumanA();

};

#endif