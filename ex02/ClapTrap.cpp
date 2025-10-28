#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : 
    _name(name), _hitPoints(100), _energy(50), _damage(20)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
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
    this->subEnergyAmmout(1);
}

int ClapTrap::getAttackDamage() const
{
    return this->_damage;
}

void ClapTrap::setAttackDamage(int amout)
{
    this->_damage = amout;
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
    this->subHitPointsAmmout(int(amount));
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
    this->subEnergyAmmout(1);
}

int ClapTrap::getEnergyAmmout() const
{
    return this->_energy;
}

void ClapTrap::setEnergyAmmount(int amount)
{
    this->_energy = amount;
}

int ClapTrap::subEnergyAmmout(unsigned int amount)
{
    this->_energy -= amount;
    return this->_energy;
}

int ClapTrap::getHitPointsAmmout() const
{
    return this->_hitPoints;
}

void ClapTrap::setHitPointsAmmount(int amount)
{
    this->_hitPoints = amount;
}

int ClapTrap::subHitPointsAmmout(unsigned int amount)
{
    this->_hitPoints -= amount;
    return this->_hitPoints;
}

void ClapTrap::addHitPointsAmmout(int amount)
{
    this->_hitPoints += amount;
}
