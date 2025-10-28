#include "FragTrap.hpp"
#include <typeinfo>

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called\n";
    this->setEnergyAmmount(100);
    this->setHitPointsAmmount(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy assignment operator called\n";
    if (this == &other)
        return *this;
    // *this = other;
    this->setEnergyAmmount(other.getEnergyAmmout());
    this->setHitPointsAmmount(other.getHitPointsAmmout());
    this->setAttackDamage(other.getAttackDamage());
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (this->getEnergyAmmout() == 0 || this->getHitPointsAmmout() == 0)
    {
        std::cout << this->getName() <<
        "cannot attack" << std::endl;
        return ;
    }

    std::cout << &((char*)(typeid(*this).name()))[1] << " " <<this->getName() << 
            " attacks " << target <<
            ", causing " << this->getAttackDamage() <<
            " points of damage!" << std::endl;
    this->subEnergyAmmout(1);
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPointsAmmout() == 0)
    {
        std::cout << this->getName() <<
        "cannot take damage" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << this->getName() <<
            " takes " << amount <<
            " points of damage!" << std::endl;
    this->subHitPointsAmmout(int(amount));
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyAmmout() == 0 || this->getHitPointsAmmout() == 0)
    {
        std::cout << this->getName() <<
        "cannot be repaired" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << this->getName() <<
            " repairs itself" << std::endl;

    this->addHitPointsAmmout((int)amount);
    this->subEnergyAmmout(1);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap My name is " << this->getName() << 
    " sending a positive highFives" << std::endl;
}
