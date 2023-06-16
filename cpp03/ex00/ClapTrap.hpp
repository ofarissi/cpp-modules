#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include    <iostream>

class ClapTrap {
    private:
            std::string name;
            int hitPoints;
            int energyPoints;
            int attackPoints;
    public:
            ClapTrap(std::string name);
            ClapTrap();
            ClapTrap(const ClapTrap& source);
            ClapTrap& operator=(const ClapTrap& source);
            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
            int getAttackPoints() const;
            int getHitPoints() const;
            int getEnergyPoints() const;
            ~ClapTrap();
};


#endif