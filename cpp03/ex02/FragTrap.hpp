#ifndef FRAGTRAP_HPP
#define FRAGTRP_HPP

#include    "ClapTrap.hpp"

class FragTrap : public ClapTrap {
        public:
                FragTrap();    
                FragTrap(std::string name);
                FragTrap(const FragTrap& source);
                ~FragTrap();
                FragTrap& operator=(const FragTrap& source);
                void    highFivesGuys();
};

#endif