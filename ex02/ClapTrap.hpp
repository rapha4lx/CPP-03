#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energy;
    int _damage;
public:
    explicit ClapTrap(const std::string name);
    virtual ~ClapTrap();

    std::string getName();

    virtual void attack(const std::string &target);
    void setAttackDamage(int amount);
    int getAttackDamage() const;
    
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);

    int getEnergyAmmout() const;
    void setEnergyAmmount(int amount);
    int subEnergyAmmout(unsigned int amount);

    int getHitPointsAmmout() const;
    void setHitPointsAmmount(int amount);
    int subHitPointsAmmout(unsigned int amount);
    void addHitPointsAmmout(int amount);
};

