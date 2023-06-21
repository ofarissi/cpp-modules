#include    "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackPoints = 30;
    std::cout << "FragTrap: Default : Constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackPoints = 30;
    std::cout << "FragTrap: " << this->name << " : Constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& source) : ClapTrap(source)
{
    std::cout << "FragTrap: " << this->name << " Copy Constructor called." << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0){
        this->energyPoints -= 1;
        std::cout << "FragTrap: " << this->name << " attacks " << target
        << ", causing " << this->attackPoints << " points of damage!" << std::endl;
    }
    else if (this->energyPoints <= 0) {
        std::cout << "FragTrap: " << this->name << " does have not enough energy points to attack!" << std::endl;
    }
    else {
        std::cout << "FragTrap: " << this->name << " does have not enough hit points to attack!" << std::endl;
    }
}

FragTrap&   FragTrap::operator=(const FragTrap& source)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->name = source.name;
	this->hitPoints = source.hitPoints;
	this->energyPoints = source.energyPoints;
	this->attackPoints = source.attackPoints;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << this->name << " : Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap: " << this->name << " : Here's your hive:\n\t*HIGH FIVE*" << std::endl;
}