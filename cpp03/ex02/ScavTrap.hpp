#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include    "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    private:
            bool flag;
    public:
            ScavTrap(std::string name);
            ScavTrap();
            ScavTrap(const ScavTrap& source);
            ScavTrap& operator=(const ScavTrap& source);
            void attack(const std::string& target);
            void    guardGate();
            ~ScavTrap();
};

#endif