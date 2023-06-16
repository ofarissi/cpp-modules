#include    "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->attackPoints = 20;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->flag = false;
    std::cout << "ScavTrap Constructor named " << this->name << " called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    this->attackPoints = 20;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->flag = false;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source)
{
    this->flag = source.flag;
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& source)
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
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

void    ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0){
        this->energyPoints -= 1;
        std::cout << "ScavTrap: " << this->name << " attacks " << target
        << ", causing " << this->attackPoints << " points of damage!" << std::endl;
    }
    else if (this->energyPoints <= 0) {
        std::cout << "ScavTrap: " << this->name << " does have not enough energy points to attack!" << std::endl;
    }
    else {
        std::cout << "ScavTrap: " << this->name << " does have not enough hit points to attack!" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    if (this->flag == false) {
        this->flag = true;
        std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << this->name << " is already guarding the gate" << std::endl;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << " : Destructor called" << std::endl;
}