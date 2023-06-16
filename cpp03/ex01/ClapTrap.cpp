#include    "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->attackPoints = 0;
    this->hitPoints = 10;
    this->energyPoints = 10;
    std::cout << "ClapTrap: " << this->name << " : Constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
    this->name = "Default";
    this->attackPoints = 0;
    this->hitPoints = 10;
    this->energyPoints = 10;
    std::cout << "ClapTrap: " << this->name << " : Constructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0){
        this->energyPoints -= 1;
        std::cout << "ClapTrap: " << this->name << " attacks " << target
        << ", causing " << this->attackPoints << " points of damage!" << std::endl;
    }
    else if (this->energyPoints <= 0) {
        std::cout << "ClapTrap: " << this->name << " does have not enough energy points to attack!" << std::endl;
    }
    else {
        std::cout << "ClapTrap: " << this->name << " does have not enough hit points to attack!" << std::endl;
    }
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
    std::cout << " copy Constructor called" << std::endl;
    this->name = source.name;
	this->hitPoints = source.hitPoints;
	this->energyPoints = source.energyPoints;
	this->attackPoints = source.attackPoints;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& source)
{
    std::cout << "ClapTrap Assignment operator called" << std::endl;
	
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

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0) {
        this->hitPoints -= amount;
        if (hitPoints < 0) {
            this->hitPoints = 0;
        }
        std::cout << "ClapTrap: " << this->name << " took " << amount
        << " point of damage!" << std::endl;
    }
    else {
        std::cout << "chill " << this->name << " is already dead!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0
       && (this->hitPoints + amount) <= 10) {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTrap: " << this->name << " repaired " << amount
        << " hit points!" << std::endl;
    }
    else if (this->energyPoints == 0) {
        std::cout << "ClapTrap: " << this->name << " does have not enough energy points to be repaired!" << std::endl;
    }
    else if (this->hitPoints == 0) {
        std::cout << "ClapTrap: " << this->name << " does have not enough hit points to be repaired!" << std::endl;
    }
    else {
    	std::cout << "ClapTrap: " << this->name << " can't be repaired to have more than 10 hit points." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " : Destructor called" << std::endl;
}

int ClapTrap::getAttackPoints() const
{
    return this->attackPoints;
}

int ClapTrap::getHitPoints() const
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->energyPoints;
}
