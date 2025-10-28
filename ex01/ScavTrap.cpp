#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyAmmout() == 0 || this->getHitPointsAmmout() == 0)
    {
        std::cout << this->getName() <<
        "cannot attack" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << this->getName() << 
            " attacks " << target <<
            ", causing " << this->getAttackDamage() <<
            " points of damage!" << std::endl;
    this->subEnergyAmmout();
}
