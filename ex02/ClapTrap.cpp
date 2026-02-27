#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : 
    _name(name), _hitPoints(100), _energy(50), _damage(20)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName()
{
    return this->_name;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->getEnergyAmmout() == 0 || this->getHitPointsAmmout() == 0)
    {
        std::cout << this->_name <<
        "cannot attack" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << _name << 
            " attacks " << target <<
            ", causing " << _damage <<
            " points of damage!" << std::endl;
    this->subEnergyAmmout();
}

int ClapTrap::getAttackDamage()
{
    return this->_damage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPointsAmmout() == 0)
    {
        std::cout << this->_name <<
        "cannot take damage" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << _name <<
            " takes " << amount <<
            " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyAmmout() == 0 || this->getHitPointsAmmout() == 0)
    {
        std::cout << this->_name <<
        "cannot be repaired" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << _name <<
            " repairs itself" << std::endl;

    this->addHitPointsAmmout((int)amount);
    this->subEnergyAmmout();
}

int ClapTrap::getEnergyAmmout()
{
    return this->_energy;
}

int ClapTrap::subEnergyAmmout()
{
    this->_energy--;
    return this->_energy;
}

int ClapTrap::getHitPointsAmmout()
{
    return this->_hitPoints;
}

int ClapTrap::subHitPointsAmmout()
{
    this->_hitPoints--;
    return this->_hitPoints;
}

void ClapTrap::addHitPointsAmmout(int amount)
{
    this->_hitPoints += amount;
}
